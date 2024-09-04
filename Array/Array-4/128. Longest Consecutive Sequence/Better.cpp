class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n==0) return 0;
        sort(nums.begin(),nums.end()); // nlogn
        int count = 0;
        int ans = 1;
        int x = INT_MIN;
        for(int i=0; i<n; i++){ // n
            if(nums[i]-1==x){
                count++;
                x = nums[i];
            }

            else if(nums[i]!=x){
                count = 1;
                x = nums[i];
            }
            
            ans = max(ans,count);
        }

        return ans;
    }
};

// T.C = O(nlogn) + O(n)