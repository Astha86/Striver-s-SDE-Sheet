class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        int row = 0;
        for(int i=0; i<r; i++){ //r
            if(target<=matrix[i][c-1]){
                row = i;
                break;
            }
        }

        for(int i=0; i<c; i++){ // c
            if(matrix[row][i]==target) return true;
        }

        return false;
    }
};

//  T.C = O(N+M)