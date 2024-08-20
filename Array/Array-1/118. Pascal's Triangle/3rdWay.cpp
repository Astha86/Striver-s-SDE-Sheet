// Generate the entire triangle (LeetCode Question) 

class Solution {
public:

    vector<int> row(int r){
        int ans = 1;
        vector<int>v;
        v.push_back(ans);
        for(int i=0; i<r; i++){
            ans *= (r-i);
            ans /= (i+1);
            v.push_back(ans);
        }
        return v;
    } 

    vector<vector<int>> generate(int r) {
        vector<vector<int>> ans;
        for(int i=1; i<=r; i++){
            vector<int>v = row(i-1);
            ans.push_back(v);
        }
        return ans;
    }
};


// T.C = O(n^2)