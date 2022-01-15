#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
  int dp[101][10001];
  int partition(int a[],int k,int n)
  {
      if(n==0 || k==0)
      {
          dp[n][k]=0;
          return dp[n][k];
      }
      if(dp[n][k]!=-1)
      {
          return dp[n][k];
      }
      if(a[n-1]<=k)
      {
          dp[n][k]=max(partition(a,k,n-1),a[n-1]+partition(a,k-a[n-1],n-1));
      }
      else
      {
          dp[n][k]=partition(a,k,n-1);
      }
      return dp[n][k];
  }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	    }
	    int k=sum/2;
	    for(int i=0;i<n+1;i++)
	    {
	        for(int j=0;j<k+1;j++)
	        {
	            dp[i][j]=-1;
	        }
	    }
	    int res=partition(arr,k,n);
	    return (sum-(2*res));
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends