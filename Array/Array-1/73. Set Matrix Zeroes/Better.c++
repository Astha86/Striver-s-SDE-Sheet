class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int r = matrix.size();
        int c = matrix[0].size();

        int row[r];
        int col[c];

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==0){
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(row[i]==0 || col[j]==0){
                    matrix[i][j] = 0;
                }
            }
        }

        return;
    }
};

// T.C = O((r*c)+(r*c)) approx n^2
// S.C = O(r)+O(c)