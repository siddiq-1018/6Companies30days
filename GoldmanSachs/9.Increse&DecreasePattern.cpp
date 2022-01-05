// https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        string A;
        stack<int> St;
        int num = 1;
        for(int i=0;i<S.length();i++){
            if(S[i] == 'D'){
                St.push(num);
                num++;
            }else{
                St.push(num);
                num++;
                while(!St.empty()){
                    A += to_string(St.top());
                    St.pop();
                }
            }
        }
        St.push(num);
        while(!St.empty()){
            A += to_string(St.top());
            St.pop();
        }
        return A;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends