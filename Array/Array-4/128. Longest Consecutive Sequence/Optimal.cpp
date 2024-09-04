class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n==0) return 0;
        int ans = 1;
        unordered_set<int>s;
        for(int i=0; i<n; i++){ // n
            s.insert(nums[i]);
        }

        for(int i: s){
            if(s.find(i-1) == s.end()){ // not found case
                int count = 1;
                int x = i;
                while(s.find(x+1) != s.end()){
                    x++;
                    count++;
                }
                ans = max(ans,count);
            }
        }

        return ans;
    }
};

// T.C = O(n) 
// S.C = O(n) 