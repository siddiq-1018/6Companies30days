#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        long long int r;
        string s="";
        while(n)
        {
           
            r=n%26;
            if(r==0)
            {
                r=26;
                n-=26;
            }
            s=char(64+r)+s;
             n=n/26;
        }
        return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}
  // } Driver Code Ends