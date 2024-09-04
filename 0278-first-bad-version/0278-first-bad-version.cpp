// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1,r=n,m;
        while(l<=r){
            m = l+(r-l)/2;
            int res=isBadVersion(m);
            if(res==1 && (m==1 || isBadVersion(m-1)!=1)){
                return m;
            }
            else if(res==0){
                l=m+1;
            }
            else{
                r=m;
            }
        }
        return m;
    }
};