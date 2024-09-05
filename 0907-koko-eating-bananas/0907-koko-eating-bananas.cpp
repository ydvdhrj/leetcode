class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r = *std::max_element(piles.begin(),piles.end());

        while(l<r){
            int m = l+(r-l)/2;
            if(isCal(piles,h,m)){
                r=m;
            }
            else{
                l=m+1;
            }
        }
        return l;
    }
private:
    bool isCal(vector<int>& piles, int h, int k){
        int hours=0;
        for(auto pile:piles){
            hours+=std::ceil(static_cast<double>(pile)/k);
        }
        return hours <= h;
    }
};