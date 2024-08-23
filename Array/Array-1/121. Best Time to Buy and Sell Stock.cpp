class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;
        int buy = prices[0];
        for(int i=1; i<n; i++){
            int x = prices[i];
            ans = max(ans,x-buy);
            buy = min(buy,x);
        }
        return ans;
    }
};

// T.C = O(N)
// S.C = O(1)