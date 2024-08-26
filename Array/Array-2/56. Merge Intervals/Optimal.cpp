class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end()); // n*logn
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for(int i=1; i<n; i++){ // n
            int a = intervals[i][0];
            int b = intervals[i][1];
            if(a<=ans.back()[1]) ans.back()[1] = max(ans.back()[1],b);
            else ans.push_back({a,b});
        }
        return ans;
    }
};

// T.C = O(n*logn) + O(n)