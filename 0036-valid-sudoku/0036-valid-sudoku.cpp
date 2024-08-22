class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //for valid row
        for(int i=0;i<9;i++){
            unordered_set<char> s;
            for(int j=0;j<9;j++){
                char x = board[i][j];
                if(x!='.' && !s.insert(x).second){
                    return false;
                }
            }
        }
        //for vaalid column
        for(int i=0;i<9;i++){
            unordered_set<char> s;
            for(int j=0;j<9;j++){
                char x = board[j][i];
                if(x!='.' && !s.insert(x).second) return false;
            }
        }
        //for valid grid
        vector<vector<int>> grid = {
            {0,0},{0,3},{0,6},
            {3,0},{3,3},{3,6},
            {6,0},{6,3},{6,6}
        };
        for(auto it:grid){
            unordered_set<char> s;
            for(int row=it[0];row<it[0]+3;row++){
                for(int col=it[1];col<it[1]+3;col++){
                    char x = board[row][col];
                    if(x!='.' && !s.insert(x).second) return false;
                }
            }
        }
        return true;

    }
};