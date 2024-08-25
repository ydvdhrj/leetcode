class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n,0);
        vector<int> rmax(n,0);
        int lwall = 0;
        int rwall = 0;
        for(int i=0;i<n;i++){
            int j = n-i-1;
            lmax[i] = lwall;
            rmax[j] = rwall;
            lwall = max(lwall,height[i]);
            rwall = max(rwall, height[j]);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            int minh = min(lmax[i],rmax[i]);
            int pot = max(0,minh-height[i]);
            sum+=pot;
        }
        return sum;
    }
};