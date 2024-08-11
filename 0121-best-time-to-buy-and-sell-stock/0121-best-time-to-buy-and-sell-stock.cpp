class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxp = 0,min_val = INT_MAX;
        for(int i=0;i<n;i++){
            if(prices[i]<min_val) min_val = prices[i];
            maxp = max(prices[i] - min_val,maxp);
        }
        return maxp;
    }
};