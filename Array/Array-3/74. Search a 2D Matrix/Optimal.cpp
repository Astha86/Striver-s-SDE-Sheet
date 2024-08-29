// Hint - flatten the given 2D matrix to a 1D array not really but with some logics

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        int lo = 0;
        int hi = (r*c)-1;
        while(lo<=hi){ // log n*m
            int mid = (lo+hi)/2;
            int row = mid/c;
            int col = mid%c;
            if(target==matrix[row][col]) return true;
            else if(target>matrix[row][col]) lo = mid+1;
            else hi = mid-1;
        }

        return false;
    }
};

//  T.C = O(log(m * n))