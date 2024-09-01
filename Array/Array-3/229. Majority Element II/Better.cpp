class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int>m;
        for(int i: nums){
            m[i]++;
        }

        for(auto i : m){
            int x = i.second;
            if(x>n/3) ans.push_back(i.first);
        }

        return ans;
    }
};


// T.C = O(n)+O(n) = O(n)
// S.C = O(n) bcoz of map