class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxp = 0,min_val = INT_MAX;
        int soldtoday = -1;
        for(int i=0;i<n;i++){
            min_val = min(prices[i],min_val);
            soldtoday = prices[i] - min_val;
            maxp = max(soldtoday,maxp);
        }
        return maxp;
    }
};