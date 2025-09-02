class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(points[i][0]<points[j][0]){
                    swap(points[i],points[j]);
                }
                else if(points[i][0]==points[j][0]){
                    if(points[i][1]>points[j][1]){
                        swap(points[i],points[j]);
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            int a = points[i][0];
            int b = points[i][1];

            cout<<a<<b<<",";
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(points[i][1]==points[j][1]){
                    count++;
                    break;
                }
                else if(points[i][1]<points[j][1]){
                    count++;
                    bool check = false;
                    int y1 = points[i][1];
                    int y2 = points[j][1];
                    for(int k=j+1;k<n;k++){
                        if(points[k][1]==y1){
                            count++;
                            check = true;
                            break;
                        }
                        else if(points[k][1]>y1 && points[k][1]<y2){
                            count++;
                            y2 = points[k][1];
                            check=true;
                        }
                        else{
                            check = true;
                            // break;
                        }
                    }
                    if(check) break;
                }
                else continue;
            }
        }
        return count;
    }
};