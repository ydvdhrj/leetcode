class Solution {
public:
    void dfs(vector<vector<int>>& ans, vector<vector<int>>& image, int sr,
    int sc, int color, int inicolor, int delRow[],int delCol[],int n,int m){
        ans[sr][sc]=color;
        for(int i=0;i<4;i++){
            int nx = sr+delRow[i];
            int ny = sc+delCol[i];
            if(nx>=0 && nx<n && ny>=0 && ny<m && image[nx][ny]==inicolor && ans[nx][ny]!=color){
                dfs(ans,image,nx,ny,color,inicolor,delRow,delCol,n,m);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        int delRow[] = {0,0,1,-1};
        int delCol[] = {1,-1,0,0};
        vector<vector<int>> ans = image;
        dfs(ans,image,sr,sc,color,inicolor,delRow,delCol,n,m);
        return ans;
    }
};