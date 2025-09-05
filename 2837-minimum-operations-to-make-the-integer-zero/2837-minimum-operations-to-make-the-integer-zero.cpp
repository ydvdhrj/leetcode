class Solution {
public:
    int makeTheIntegerZero(int n1, int n2) {
        int k=1;
        while(true){
            long long x = (long long)n1 - (long long)k*n2;
            // sum of k distinct power of 2 is always >=k 
            if(x<k){ 
                break;
            }
            int set_bit = __builtin_popcountll(x);
            if(set_bit<=k){
                return k;
            }
            k++;
        }
        return -1;
    }
};