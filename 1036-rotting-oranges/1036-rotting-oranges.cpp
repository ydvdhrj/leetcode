class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int count=0;
        queue<pair<int,int>> q;
        int totalRotten=0,oranges=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> matrix(n+2,vector<int>(m+2,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0) oranges++;
                if(grid[i][j]==2){
                    q.push({i+1,j+1});
                }
                matrix[i+1][j+1]=grid[i][j];
            }
        }
        while(!q.empty()){
            int s = q.size();
            totalRotten+=s;
            while(s--){
                auto rotten = q.front();
                q.pop();
                int i=rotten.first,j=rotten.second;
                if(matrix[i+1][j]==1){
                   matrix[i+1][j]=2;
                   q.push({i+1,j}); 
                }
                if(matrix[i-1][j]==1){
                   matrix[i-1][j]=2;
                   q.push({i-1,j}); 
                }
                if(matrix[i][j+1]==1){
                   matrix[i][j+1]=2;
                   q.push({i,j+1}); 
                }
                if(matrix[i][j-1]==1){
                   matrix[i][j-1]=2;
                   q.push({i,j-1}); 
                }
                
            }
            count++;

        }
        if(oranges==0) return 0;
        if(totalRotten!=oranges) return -1;
        return count-1;
    }
};