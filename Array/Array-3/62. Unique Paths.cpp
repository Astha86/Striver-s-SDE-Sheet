class Solution {
public:
    int uniquePaths(int r, int c) {
        vector<vector<int>> dp(r,vector<int>(c));
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(i==0 || j==0) dp[i][j] = 1;
                else{
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }
        return dp[r-1][c-1];
    }
};

// T.C = O(r*c)
// S.C = O(r*c)