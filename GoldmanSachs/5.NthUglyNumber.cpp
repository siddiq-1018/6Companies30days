// https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/

#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	   set<ull> S;
	   S.insert(1);
	   n-=1;
	   while(n--){
	        auto it = S.begin();
	        ull x = *it;
	        S.erase(it);
	        S.insert(x*2);
	        S.insert(x*3);
	        S.insert(x*5);
	    } 
	    ull res=*S.begin();
        return res;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends