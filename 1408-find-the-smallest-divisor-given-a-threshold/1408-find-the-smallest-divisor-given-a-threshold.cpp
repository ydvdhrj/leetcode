class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int l=1;
        int r=INT_MIN;
        for(int i=0;i<n;i++){
            r = max(r,nums[i]);
        }
        while(l<=r){
            int m = (l+r)/2;
            int sum=0;
            for(int i=0;i<n;i++){
                sum += ceil((double)(nums[i]) / (double)(m));
            }
            if(sum<=threshold){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return l;
    }
};