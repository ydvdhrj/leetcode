class Solution {
public:
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>> q;
        int n=mat.size();
        int m = mat[0].size();
        vector<vector<int>> dist(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    dist[i][j]=0;
                }
            }
        }

        int x[] = {0,0,-1,1};
        int y[] = {1,-1,0,0};
        while(!q.empty()){
            auto [i,j] = q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int nx = i+x[k];
                int ny = j+y[k];
                if(nx>=0 && nx<n && ny>=0 && ny<m && dist[nx][ny]==-1){
                    dist[nx][ny]=dist[i][j]+1;
                    q.push({nx,ny});
                }
            }
            
        }
        return dist;
    }
};