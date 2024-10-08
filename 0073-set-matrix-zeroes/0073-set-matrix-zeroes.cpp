class Solution {
public:
// bruteforce approach
    // void replaceZero(int row,int col,vector<vector<int>> &matrix){
    //     for(int j=0;j<matrix[0].size();j++){
    //         matrix[row][j]=0;
    //     }
    //     for(int i=0;i<matrix.size();i++){
    //         matrix[i][col]=0;
    //     }
    // }
    void setZeroes(vector<vector<int>>& matrix) {
        //bruteforce approach
        
        // stack<pair<int,int>> row_col;
        // for(int row =0;row<matrix.size();row++){
        //     for(int col = 0;col < matrix[0].size();col++){
        //         if(matrix[row][col]==0){
        //             row_col.push({row,col});
        //         }
        //     }
        // }
        // while(!row_col.empty()){
        //     auto top_pair = row_col.top();
        //     replaceZero(top_pair.first,top_pair.second,matrix);
        //     row_col.pop();
        // }


        //better approach
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> row(n,0);
        vector<int> col(m,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]==1 || col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};