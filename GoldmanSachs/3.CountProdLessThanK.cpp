// https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/ 

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
           long long int st=0,en=0,count=0,pro=1;
            while(en<n){
               pro*=a[en];
               while(st<n && pro>=k){
                   pro=pro/a[st];
                   st++;
               }
               if(pro<k)
               count+=en-st+1;
               en++;
       }
       return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends