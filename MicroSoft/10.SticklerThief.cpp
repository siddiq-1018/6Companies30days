#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int dp[10001];
    int stickler(int arr[],int n){
        
        if(n<=0){
            return 0;
        }
        if(n==1){
            return arr[0];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]= max(stickler(arr,n-1),arr[n-1]+stickler(arr,n-2));
        return dp[n];
        
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
 
        for(int i=0;i<=n;i++){
            dp[i]=-1;
        }
        return stickler(arr,n);
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends