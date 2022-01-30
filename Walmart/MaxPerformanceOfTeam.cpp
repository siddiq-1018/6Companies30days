class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
         vector<pair<int, int>> store(n);
        for (int i = 0; i < n; ++i)
            store[i] = {efficiency[i], speed[i]};
        
        sort(rbegin(store), rend(store));
        long sum = 0, res = 0;
        priority_queue <int, vector<int>, greater<int>> pq; 
        
        for(auto& [e, s]: store){
            pq.emplace(s);
            sum += s;
            if (pq.size() > k) {
                sum -= pq.top();
                pq.pop();
            }
            res = max(res, sum * e);
        }
        return res % (int)(1e9+7);
    }
};
