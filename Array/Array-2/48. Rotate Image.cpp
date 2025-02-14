class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        //  Step-1: Transpose the matrix
        for(int i=0; i<r; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //  Step-2: Reverse the matrix
        for(int i=0; i<r; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

// T.C = O(n*n) + O(n*n)
