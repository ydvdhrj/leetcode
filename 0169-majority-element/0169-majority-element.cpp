class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //by using hash map
        
        // unordered_map<int,int> m;
        // for(int i:nums){
        //     m[i]++;
        // }
        // int max=0,ans=0;
        // for(auto it:m){
        //     if(it.second>max){
        //         ans=it.first;
        //         max = it.second;
        //     } 
        // }
        // return ans;

        int ele = -1, count=0;
        for(int i:nums){
            if(count==0) ele = i;
            count+= (i==ele)?1:-1;
        }
        return ele;
    }
};