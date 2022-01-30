class Solution {
public:
    pair<int, int> dp[501][501] = {};
    pair<int, int> solve(vector<int>& piles, int left, int right) {
        if (left > right) return make_pair(0, 0);
        if (dp[left][right].first != 0) return dp[left][right];

        pair<int, int> leftPick = solve(piles, left + 1, right);
        pair<int, int> rightPick = solve(piles, left, right - 1);
        if (piles[left] + leftPick.second > piles[right] + rightPick.second) {
            return dp[left][right] = make_pair(piles[left] + leftPick.second, leftPick.first); 
        }
        return dp[left][right] = make_pair(piles[right] + rightPick.second, rightPick.first); 
    }
    bool stoneGame(vector<int>& piles) {
        auto [aliceScore, leeScore] = solve(piles, 0, piles.size() - 1);
        return (aliceScore > leeScore);
    }
    
};
