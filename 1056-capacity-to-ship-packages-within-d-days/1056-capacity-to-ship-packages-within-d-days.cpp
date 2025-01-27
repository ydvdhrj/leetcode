class Solution {
public:
    int possible(vector<int>& arr, int m, int days){
        int k=0;
        int sum=0;
        // for(int i=0;i<arr.size();i++){
        //     if(sum<=m){
        //         sum+=arr[i];
        //     }
        //     else{
        //         k++;
        //         sum=arr[i-1]+arr[i];
        //     }
        // }
        // if(sum>m) k+=2;
        // else k++;
        for(auto x:arr){
            if(sum+x<=m){
                sum+=x;
            }
            else{
                k++;
                sum=x;
            }
        }
        k++;
        return (k<=days);
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int l=INT_MIN;
        int r=0;
        for(int i=0;i<n;i++){
            r+=weights[i];
            l = max(l,weights[i]);
        }
        while(l<=r){
            int m = (l+r)/2;
            if(possible(weights, m, days)){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return l;
    }
};