class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = -1;
        int r = matrix.size();
        int c = matrix[0].size();

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0;
                    if(j==0) col0 = 0;
                    else matrix[0][j] = 0;
                }
            }
        }

        for(int i=1; i<r; i++){
            for(int j=1; j<c; j++){
                if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
            }
        }

        if(matrix[0][0]==0){
            for(int i=0; i<c; i++){
                matrix[0][i] = 0;
            }
        }

        if(col0==0){
            for(int i=0; i<r; i++){
                matrix[i][0] = 0;
            }
        }

        return ;
    }
};

// T.C = O(r*c)
// This approach is better as compare to better approach because here we are not using any extra space