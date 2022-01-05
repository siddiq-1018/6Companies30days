// https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    if(str.size()<1 || str[0]=='0') 
		        return 0;
            if(str.size()==1) 
                return 1;
            int a=1,b=1;
            for(int i=1;i<str.size();i++){
                int l,m;
                l=str[i]-'0';
                m=(str[i-1]-'0')*10+l;
                int val=0;
                if(l>=1) 
                {
                    val=(val+b)%1000000007;
                }
                if(m>9 && m<=26) 
                {
                    val=(val+a)%1000000007;
                }
                a=b;
                b=val;
            }
            return b%1000000007;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends