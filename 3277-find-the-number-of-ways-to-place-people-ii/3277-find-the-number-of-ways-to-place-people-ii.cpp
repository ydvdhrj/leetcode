class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        sort(points.begin(),points.end(), [](const auto& a, const auto& b){return a[0]==b[0]?a[1]>b[1]:a[0]<b[0]; });
        int counts=0;
        for(int i=0;i<points.size()-1;i++){
            int y1 = points[i][1];
            int y2 = INT_MIN;
            for(int j=i+1;j<points.size();j++){
                int y = points[j][1];
                if(y==y1){
                    counts++;
                    break;
                }
                else if(y>y2 && y<y1){
                    counts++;
                    y2 = y;
                }
            }
        }
        return counts;
    }
};