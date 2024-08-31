class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int x = nums[0];

        for(int i=1; i<n; i++){
            if(count == 0){
                count = 1;
                x = nums[i];
            }

            else if(nums[i]==x) count++;
            else count--;
        }

        int ct = 0;
        for(int i=0; i<n; i++){
            if(nums[i]==x) ct++;
        }

        if(ct >= n/2) return x;
        return -1;
    }
};

// T.C = O(n) + O(n) approx O(n)