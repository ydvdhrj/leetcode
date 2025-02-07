class Solution {
public:
    int stairs(int n, vector<int>& memo){
        if(n==1 || n==0){
            return 1;
            memo[n]=1;
        }
        if(memo[n]!=-1) return memo[n];
        return memo[n] = stairs(n-1,memo)+stairs(n-2,memo);
    }
    int climbStairs(int n) {
        // if(n ==0 || n == 1){
        //     return 1;
        // }
        // int prev = 1, curr = 1;
        // for(int i = 2; i<= n; i++){
        //     int temp = curr;
        //     curr = prev + curr;
        //     prev = temp;
        // }
        // return curr;

        // by using dp

        vector<int> memo(n+1,-1);
        return stairs(n,memo);
        

    }
};