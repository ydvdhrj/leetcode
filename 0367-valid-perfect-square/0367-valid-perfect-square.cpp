class Solution {
public:
    bool isPerfectSquare(int num) {
        
        // if(num>2 && num%2!=0) return false;
        if(num==1) return true;
        int l=1,r=num/2;
        long int m;
        while(l<=r){
            m=l+(r-l)/2;
            if(m*m==num) return true;
            else if(m*m>num) r=m-1;
            else l=m+1;
        }
        return false;
    }
};