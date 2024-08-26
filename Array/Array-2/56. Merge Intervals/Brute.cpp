class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i=0; i<n; i++){
            int a = intervals[i][0];
            int b = intervals[i][1];
            if(ans.size()>0 && b<=ans.back()[1]) continue;
            for(int j=i+1; j<n; j++){
                if(intervals[j][0]<=b) b = max(b,intervals[j][1]);
                else break;
            }

            ans.push_back({a,b});
        }
        return ans;
    }
};

// T.C = O(n*logn) + O(2*n)