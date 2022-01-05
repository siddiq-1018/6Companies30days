#include<bits/stdc++.h>
using namespace std;

vector<int>V(10000001);

int main()
{
    for(int i=0;i<10000001;i++)
    {
        cin>>V[i];
    }
    sort(V.begin(),V.end(),greater<int>());
    for(int i=0;i<10;i++)
    {
        cout<<V[i]<<" ";
    }
    return 0;
}