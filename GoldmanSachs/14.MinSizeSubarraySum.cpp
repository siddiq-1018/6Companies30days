// https://leetcode.com/problems/minimum-size-subarray-sum/


#include<bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,ans=INT_MAX,sum=0,x=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            l+=1;
            while(sum>=target)
            {
                ans = min(ans,l);
                l-=1;
                sum-=nums[x++];
            }
        
        }   
        if(ans==INT_MAX) return 0;
        return ans;
    }

    int main()
    {
        int target;
        int n;
        cin>>n;
        vector<int> V(n);
        for(int i=0;i<n;i++)
        {
            cin>>V[i];
        }
        cin>>target;
        int ans=minSubArrayLen(target,V);
        cout<<ans<<endl;
        return 0;
    }