class Solution {
public:
    int uniquePaths(int m, int n) {
        long long ans=1;
        long long total = m+n-2;
        
        if((m==1 || n==1) && m!=n) return 1;
        else{
            if(m<=n){
                // long long temp = 1;
                for(int i=1;i<m;i++){
                    if(total>n-1){
                        ans = ans*total;
                        total--;
                    }
                    // temp*=i;
                    ans  = ans/i;
                }
                // ans/=temp;
            }
            else{
                // long long temp = 1;
                for(int i=1;i<n;i++){
                    if(total>m-1){
                        ans = ans*total;
                        total--;
                    }
                    // temp*=i;
                    ans = ans/i;
                }
                // ans/=temp;
            }
        }
        return ans;
    }
};