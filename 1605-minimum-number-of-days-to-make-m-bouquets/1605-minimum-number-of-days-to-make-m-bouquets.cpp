class Solution {
public:
    bool possible(vector<int>& arr, int day, int m, int k){
        int n = arr.size();
        int cnt=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=day){
                cnt++;
            }
            else{
                b += (cnt/k);
                cnt=0;
            }
        }
        b += (cnt/k);
        return b>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m*1ll*k*1ll;
        int n = bloomDay.size();
        if(val>n) return -1;
        int l=INT_MAX, r=INT_MIN;
        for(int i=0;i<n;i++){
            l = min(l,bloomDay[i]);
            r = max(r,bloomDay[i]);
        }

        while(l<=r){
            int mid = (l+r)/2;
            if(possible(bloomDay,mid,m,k)){
                r=mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};