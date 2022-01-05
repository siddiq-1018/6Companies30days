// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/

#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(int *arr, int n) {
        // code here
        vector<int> A;
        set<int>S;
        for(int i=0;i<n;i++)
        {
            if(S.find(arr[i])==S.end())
            {
                S.insert(arr[i]);
                //cout<<arr[i]<<" ";
            }
            else
            {
                A.push_back(arr[i]);
                //cout<<arr[i]<<" ff";
            }
        }
        int i=1;
        for(auto it:S)
        {
            if(it!=i)
            {
                A.push_back(i);
                break;
            }
            i++;
        }
        if(i==n)
        {
            A.push_back(i);
        }
        return A;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends