class Solution {
public:
    void fun(vector<int> arr,int i,vector<int> op,vector<vector<int>>& ans){
        if(i==arr.size()){
            ans.push_back(op);
            return;
        }
        for(int j=i;j<arr.size();j++){
            swap(arr[i],arr[j]);
            op.push_back(arr[i]);
            fun(arr,i+1,op,ans);
            op.pop_back();
            swap(arr[i],arr[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        fun(nums,0,op,ans);
        return ans;
    }
};