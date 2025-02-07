class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // vector<int> row(rowIndex+1,1);
        // for(int i=1;i<rowIndex;i++){
        //     for(int j=i;j>0;j--){
        //         row[j]+=row[j-1];
        //     }
        // }
        // return row;

        // optimized way

        vector<int> res(1,1);
        long long prev = 1;
        for(int j=1;j<=rowIndex;j++){
            long long next_val = prev * (rowIndex -  j+1 )/j;
            res.push_back(next_val);
            prev = next_val;
        }
        return res;
    }
};