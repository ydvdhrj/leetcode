class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(points[i][0]<points[j][0]){
        //             swap(points[i],points[j]);
        //         }
        //         else if(points[i][0]==points[j][0]){
        //             if(points[i][1]>points[j][1]){
        //                 swap(points[i],points[j]);
        //             }
        //         }
        //     }
        // }
        sort(points.begin(),points.end(), [](const auto& a, const auto& b){return a[0]==b[0]?a[1]>b[1]:a[0]<b[0]; });
        reverse(points.begin(),points.end());
        int count=0;
        for(int i=0;i<n-1;i++){
            int y1 = points[i][1];
            int y2 = INT_MAX;
            for(int j=i+1;j<n;j++){
                int y = points[j][1];
                if(y==y1){
                    count++;
                    break;
                }
                else if(y>y1 && y<y2){
                    count++;
                    y2 = y; 
                }
            }
        }
        return count;
    }
};