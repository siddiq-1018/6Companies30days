// https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
    for(int i=0;i<src.size();i++){
        int count=1;
     while(i<src.size()-1 && src[i]==src[i+1]){
         count++; 
         i++;
    }
   cout<<src[i];
   cout<<count;      
 }
  //Your code here 
}     
 
