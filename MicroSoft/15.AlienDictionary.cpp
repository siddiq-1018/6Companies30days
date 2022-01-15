#include<bits/stdc++.h>
using namespace std;

void depthFirstSearch(int src, vector<vector<int>> &g, vector<int> &vis, string &ans){
        
        vis[src] = 1;
        
        for(auto x : g[src]){
            if(!vis[x]) depthFirstSearch(x,g,vis,ans);
        }
        
        char ch = src + 'a';
        ans = ch + ans;
        
    }
    
    string findOrder(string d[], int N, int K) {
        
        vector<vector<int>> g(K);
        
        for(int i=0; i<N-1; i++){
            
            string w1 = d[i];
            string w2 = d[i+1];
            
            for(int j=0; j<min(w1.length(), w2.length()); j++){
                if(w1[j] != w2[j]){
                    g[w1[j]-'a'].push_back(w2[j]-'a');
                    break;
                }
            }
            
        }
        vector<int> vis(K,0);
        
        string ans = "";
        
        for(int i=0; i<K; i++){
            
            if(!vis[i]) depthFirstSearch(i, g, vis, ans);
            
        }
        
        return ans;
        
        
    }