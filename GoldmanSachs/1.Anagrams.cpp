// https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/

#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string> >V;
        unordered_map<string,vector<string>>M;
        int l=string_list.size();
        for(int i=0;i<l;i++)
        {
            string s=string_list[i];
            sort(s.begin(),s.end());
            M[s].push_back(string_list[i]);
        }
        for(auto it:M)
        {
            V.push_back(it.second);
        }
        return V;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends