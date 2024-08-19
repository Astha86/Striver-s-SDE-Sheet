class Solution {
public:
    void rfill(int r, vector<vector<int>>& matrix, int c){
        for(int i=0; i<c; i++){
            if(matrix[r][i]!=0) matrix[r][i]=-1;
        }
        return;
    }

    void cfill(int c, vector<vector<int>>& matrix, int r){
        for(int i=0; i<r; i++){
            if(matrix[i][c]!=0) matrix[i][c]=-1;
        }
        return;
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        bool flag = true;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==0){
                    flag = false;
                    rfill(i,matrix,c);
                    cfill(j,matrix,r);
                }
            }
        }

        if(flag) return;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==-1){
                    matrix[i][j]=0;
                }
            }
        }

        return;
    }
};


// T.C = (r*c)*(r+c)+(r*c) approx r^3(n^3)
// Failed to pass last test case
 