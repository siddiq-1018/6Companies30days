// https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1/



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        int i=(K+(M%N)-1)%N;
        if(i==0)
        {
            return N;
        }
        return i;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;
}  // } Driver Code Ends