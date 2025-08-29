class Solution {
public:
    long long flowerGame(int n, int m) {
        long even1  = 0,even2=0;
        long odd1 = 0,odd2=0;
        for(int i=1;i<=n; i++){
            if(i%2==0) even1++;
            else odd1++;
        }
        for(int j=1;j<=m;j++){
            if(j%2==0) even2++;
            else odd2++;
        }
        long long ans = even1*odd2 + even2*odd1;
        return ans;
    }
};