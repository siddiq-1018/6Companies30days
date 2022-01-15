#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.


string binary(int n)
{
    int r;
    string s="";
    while(n)
    {
        r=n%2;
        n=n/2;
        s=to_string(r)+s;
    }
    return s;
}
vector<string> generate(int N)
{
	// Your code here
	vector<string>V;
	for(int i=1;i<=N;i++)
	{
	    V.push_back(binary(i));
	}
	return V;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends