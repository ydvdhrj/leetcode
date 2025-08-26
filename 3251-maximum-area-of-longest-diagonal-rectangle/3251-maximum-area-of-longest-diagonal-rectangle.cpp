class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        map<int,vector<int>> m;
        int maxd = INT_MIN;
        for(int i=0;i<dimensions.size();i++){
            int d = dimensions[i][0]*dimensions[i][0] + dimensions[i][1]*dimensions[i][1];
            maxd = max(d,maxd);
            m[d].push_back(i);
        }
        int ans = 0;
        // vector<int> v = m[maxd];
        for(int i:m[maxd]){
            int area = dimensions[i][0]*dimensions[i][1];
            ans = max(area,ans);
        }
        return ans;
    }
};