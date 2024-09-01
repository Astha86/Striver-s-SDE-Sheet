class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        int b = 0;
        int c1 = 0;
        int c2 = 0;

        for(int i=0; i<n; i++){
            if(c1==0 && nums[i]!=b) {
                a = nums[i];
                c1++;
            }
            else if(c2==0 && nums[i]!=a) {
                b = nums[i];
                c2++;
            }
            else if(nums[i] == a) c1++;
            else if(nums[i] == b) c2++;
            else {
                c1--;
                c2--;
            }
        }
        vector<int> ans;
        c1 = 0;
        c2 = 0;
        for(int i=0; i<n; i++){
            if(nums[i]==a) c1++;
            else if(nums[i]==b) c2++;
        }

        if(c1>n/3) ans.push_back(a);
        if(c2>n/3) ans.push_back(b);
        return ans;
    }
};

// T.C = O(n)+O(n) = O(n)
// S.C = O(1)