class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        if(grid.size()<=1) return grid;
        int n = grid.size();
        for(int a=1;a<n;a++){
            for(int i=0,j=a;i<n-1&&j<n;i++,j++){
                for(int p=i+1,q=j+1;p<n-1&&q<n;p++,q++){
                    if(grid[p][q]<grid[i][j]){
                        swap(grid[i][j],grid[p][q]);
                    }
                }
            }
        }
        for(int b=0;b<n;b++){
            for(int i=b,j=0;i<n && j<n;i++,j++){
                for(int p=i+1,q=j+1;p<n && q<n;p++,q++){
                    if(grid[p][q]>grid[i][j]){
                        swap(grid[i][j],grid[p][q]);
                        cout<<grid[i][j]<<" "<<grid[p][q];
                    }
                }
            }
        }
        return grid;
    }
};