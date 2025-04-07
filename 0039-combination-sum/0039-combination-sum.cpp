class Solution {
public:
    void fun(vector<int> arr, int i,int sum,int target,vector<int>& op, vector<vector<int>>& ans){
        if(i==arr.size() && sum==target){
            ans.push_back(op);
            return;
        }
        if(i==arr.size() && sum!=target){
            return;
        }
        if(sum>target){
            return;
        }
        fun(arr,i+1,sum,target,op,ans);
        op.push_back(arr[i]);
        fun(arr,i,sum+arr[i],target,op,ans);
        op.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> op;
        fun(candidates,0,0,target,op,ans);
        return ans;
    }
};