class NumMatrix {
    private :
    int row,col;
    vector <vector<int>> T;
public:
    NumMatrix(vector<vector<int>>& matrix) {
            row = matrix.size();
            col = (row>0) ? matrix[0].size() : 0;
        
        T = vector <vector<int>>(row+1, vector<int>(col+1,0));
        for(int i=1; i<T.size(); ++i){
            for(int j=1; j<T[0].size(); ++j){
                T[i][j] = T[i-1][j] + T[i][j-1] + matrix[i-1][j-1] - T[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++;
        col1++;
        row2++;
        col2++;
        return T[row2][col2] - T[row1-1][col2] - T[row2][col1-1] + T[row1-1][col1-1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
