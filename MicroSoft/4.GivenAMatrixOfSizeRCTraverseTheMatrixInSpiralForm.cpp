#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > m, int r, int c) 
    {
        // code here 
        vector<int>V;
        int tr=0,br=r-1;
        int lc=0,rc=c-1;
        while(tr<=br && lc<=rc)
        {
            for(int j=lc;j<=rc;j++)
            {
                V.push_back(m[tr][j]);
            }
            tr++;
            if(tr>br)
            {
                break;
            }
            for(int i=tr;i<=br;i++)
            {
                V.push_back(m[i][rc]);
            }
            rc--;
            if(lc>rc)
            {
                break;
            }
            for(int j=rc;j>=lc;j--)
            {
                V.push_back(m[br][j]);
            }
            br--;
            if(tr>br)
            {
                break;
            }
            for(int i=br;i>=tr;i--)
            {
                V.push_back(m[i][lc]);
            }
            lc++;
            if(lc>rc)
            {
                break;
            }
            
        }
        return V;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends