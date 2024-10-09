class Solution {
public:
    vector<int> generateRow(int row){
        int ans=1;
        vector<int> rowEle;
        rowEle.push_back(1);
        for(int col = 1;col<row;col++){
            ans = ans*(row-col);
            ans = ans/col;
            rowEle.push_back(ans);
        }
        return rowEle;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol;
        for(int row=1;row<=numRows;row++){
            sol.push_back(generateRow(row));
        }
    return sol;
    }
};