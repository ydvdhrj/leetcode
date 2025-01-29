class Solution {
public:
double power(double b, long long e, double ans){
    if(e==0) return ans;
    if(e&1) return power(b,e-1,ans*b);
    else return power(b*b,e/2,ans);
}
    double myPow(double x, int n) {
        // if(n<0){
        //     x = 1/x;
        //     n = abs(n);
        // }
        // double ans=1;
        // while(n>0){
        //     ans = ans*x;
        //     n--;

        // }
        // return ans;

        // By using Binary exponentiation 

        // long long nn = n;
        // double ans = 1.0;
        // if(nn<0) nn = -1*nn;
        // while(nn){
        //     if(nn%2==1){
        //         ans = ans*x;
        //         nn--;
        //     }
        //     else{
        //         x = x*x;
        //         nn = nn/2;
        //     }
        // }
        // if(n<0) ans = (double)(1.0)/(double)(ans);
        // return ans;

        //by using recursion
        long long e=n;
        double ans = 1.0;
        if(n<0) e=-1LL*n;
        double sol =  power(x,e,ans);
        if(n<0) sol = (double)(1.0)/(double)(sol);
        return sol;
    }
};