#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
public:
    bool hasCycle(int i, vector<vector<int>> &adj, vector<int> &color) {
        color[i] = 1;
        
        for(int j: adj[i]) {
            if(color[j] == 1 ||
                (color[j] == 0 && hasCycle(j, adj, color))) 
                return true;
        }
        
        color[i] = 2;
        return false;
    }

	bool isPossible(int n, vector<pair<int, int> >& prerequisites) {
	    vector<vector<int>> adj(n);
	    for(auto p: prerequisites) {
	        adj[p.first].push_back(p.second);
	    }
	    vector<int> color(n);
	    for(int i = 0; i < n; i++) {
	        if(!color[i] && hasCycle(i, adj, color))
	            return false;
	    }
	    return true;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends