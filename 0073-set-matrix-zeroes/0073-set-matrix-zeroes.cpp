class Solution {
public:
    void replaceZero(int row,int col,vector<vector<int>> &matrix){
        for(int j=0;j<matrix[0].size();j++){
            matrix[row][j]=0;
        }
        for(int i=0;i<matrix.size();i++){
            matrix[i][col]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        stack<pair<int,int>> row_col;
        for(int row =0;row<matrix.size();row++){
            for(int col = 0;col < matrix[0].size();col++){
                if(matrix[row][col]==0){
                    row_col.push({row,col});
                }
            }
        }
        while(!row_col.empty()){
            auto top_pair = row_col.top();
            replaceZero(top_pair.first,top_pair.second,matrix);
            row_col.pop();
        }
    }
};