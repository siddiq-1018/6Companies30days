// https://leetcode.com/problems/greatest-common-divisor-of-strings/

#include<bits/stdc++.h>
using namespace std;

string gcdOfStrings(string str1, string str2) {
        int l1=str1.length();
        int l2=str2.length();
        if((str1+str2)==(str2+str1))
        {
            int val=__gcd(l1,l2);
            return str1.substr(0,val);
        }
        return "";
    }

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    string ans=gcdOfStrings(str1,str2);
    cout<<ans<<endl;
    return 0;
}