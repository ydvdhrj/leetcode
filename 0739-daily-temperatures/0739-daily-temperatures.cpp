class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n,0);
        stack<pair<int,int>> stk;
        for(int i=0;i<n;i++){
            int t=temp[i];
            while(!stk.empty() && stk.top().first<t){
                auto[stk_temp,stk_index] = stk.top();
                stk.pop();
                ans[stk_index] = i-stk_index;
            }
            stk.push({t,i});
        }
        return ans;
    }
};