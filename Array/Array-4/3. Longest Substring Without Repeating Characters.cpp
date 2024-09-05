class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> mpp(200, -1);
        int l = 0;
        int r = 0;
        int n = s.size();
        int ans = 0;
        while(r < n) {
            if (mpp[s[r]] != -1)
            l = max(mpp[s[r]] + 1, l);
            mpp[s[r]] = r;
            int len = r - l + 1;
            ans = max(ans, len);
            r++;
        }
        return ans;
    }
};

// T.C = O(n)
// S.C = O(n)
