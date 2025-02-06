class Solution {
public:
    int fib_dp(int n, vector<int> &memo){
        if(n<=1) return n;
        int prev;
        if(memo[n-1]!=-1)  prev = memo[n-1];
        else{
            prev = fib_dp(n-1,memo);
            memo[n-1] = prev;
        }
        int prev2;
        if(memo[n-2]!=-1) prev2 = memo[n-2];
        else{
            prev2 = fib_dp(n-2,memo);
            memo[n-2] = prev2;
        }
        return memo[n] = prev+prev2;
    }
    int fib(int n) {
        // using array
        // vector<int> arr = {0,1};
        // for(int i=2;i<=n;i++){
        //     arr.push_back(arr[i-1]+arr[i-2]);
        // }
        // return arr[n];

        // using dp
        vector<int> memo(n+1,-1);
        return fib_dp(n,memo);
    }
};