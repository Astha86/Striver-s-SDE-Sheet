class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> s;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                set<long long> st;
                for(int k=j+1; k<n; k++){
                    long long sum = (long long)nums[i] + nums[j] + nums[k];
                    long long x = (long long)target - sum;
                    if(st.find(x) != st.end()){
                        vector<int> temp = {nums[i], nums[j], nums[k], int(x)};
                        sort(temp.begin(), temp.end());
                        s.insert(temp);
                    }
                    st.insert(nums[k]);
                }
            }
        }

        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};

// T.C : O(N3*log(M)), where N = size of the array, M = no. of elements in the set.
// S.C : O(2 * no. of the quadruplets)+O(N)