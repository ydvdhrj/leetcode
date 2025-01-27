class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int l=0;
        int r=n-1;
        if((arr[n-1]-n)==0) return arr[n-1]+k;
        else if(arr[0]>k) return k;
        while(l<=r){
            int m = (l+r)/2;
            int mis  = arr[m]-m-1;
            if(mis<k){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        if(l==(n-1)&& (arr[l]-l-1)<k){
            return arr[l]+(k-(arr[l]-l-1));
        }
        else{

        int ele = l+k;
        return ele;
        }
    }
};