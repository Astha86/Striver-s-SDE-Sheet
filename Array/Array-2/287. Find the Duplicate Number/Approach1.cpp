class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end()); ///n logn
        for(int i=0; i<n; i++){ //n
            if(nums[i]==nums[i+1]) return nums[i];
        }
        return 0;
    }
};

//  T.C = O(nlogn + n)