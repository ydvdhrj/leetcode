class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        if(k==0){
            fill(code.begin(),code.end(),0);
            return code;
        }
        else if(k>0){
            vector<int> sum(n,0);
            // int s=0;
            for(int i=1;i<=k;i++){
                sum[0]+=code[i];
            }
            int lower=1,upper=k;
            for(int i=1;i<n;i++){
                if(upper==n-1) upper=0;
                else upper++;
                sum[i] = sum[i-1]+code[upper]-code[lower++];
            }
            return sum;
        }
        else{
            k=abs(k);
            vector<int> sum(n,0);
            int j=n-1;
            for(int i=1;i<=k;i++){
                sum[0]+=code[j--];
            }
            int lower=n-k,upper=0;
            for(int i=1;i<n;i++){
                sum[i] = sum[i-1]+code[upper++]-code[lower];
                if(lower==n-1) lower=0;
                else lower++;
            }
            return sum;

        }

    }
};