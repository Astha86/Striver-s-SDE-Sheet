class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1]) continue; // avoiding the repeating elements
            for(int j=i+1; j<n; j++){
                if(j > i+1 && nums[j]==nums[j-1]) continue; // avoiding the repeating elements
                int third = j+1;
                int fourth = n-1;
                while(third<fourth){
                    long long sum = (long long)nums[i] + nums[j] + nums[third] + nums[fourth];
                    if(sum==target){
                        vector<int> temp = {nums[i],nums[j],nums[third],nums[fourth]};
                        ans.push_back(temp);
                        third++;
                        fourth--;
                        while(third<fourth && nums[third]==nums[third-1]) third++;
                        while(third<fourth && nums[fourth]==nums[fourth+1]) fourth--;
                    }
                    else if(sum>target) fourth--;
                    else third++;
                }
            }
        }
        return ans;
    }
};

// T.C = O(n^3)
// S.C = O(no. of quadruplets) [for returning the answer]