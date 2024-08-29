class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();     //m
        int c = matrix[0].size();  //n

        int row = 0;
        for(int i=0; i<r; i++){ // m
            if(target<=matrix[i][c-1]){
                row = i;
                break;
            }
        }

        int lo = 0;
        int hi = c-1;
        while(lo<=hi){ // log n
            int mid = (lo+hi)/2;
            if(target==matrix[row][mid]) return true;
            else if(target>matrix[row][mid]) lo = mid+1;
            else hi = mid-1;
        }

        return false;
    }
};

// T.C = O(m + log n)