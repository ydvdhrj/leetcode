class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //using hashmap
        
        // unordered_map<int,int> m;
        // vector<int> ans;
        // for(int i:nums){
        //     m[i]++;
        // }
        // for(auto it:m){
        //     if(it.second>nums.size()/3){
        //         ans.push_back(it.first);
        //     }
        // }
        // return ans;

        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        vector<int> ans;
        int count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(count1==0 && nums[i]!=ele2){
                ele1=nums[i];
                count1++;
            }
            else if(count2==0 && nums[i]!=ele1){
                ele2=nums[i];
                count2++;
            }
            else if(nums[i]==ele1) count1++;
            else if(nums[i]==ele2) count2++;
            else{
                count1--;
                count2--;
            }
            
        }
        count1=0;
        count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele1) count1++;
            if(nums[i]==ele2) count2++;
        }
        if(count1>nums.size()/3) ans.push_back(ele1);
        if(count2>nums.size()/3) ans.push_back(ele2);
        return ans;


    //     int n = nums.size();
    //     int cnt1 = 0, cnt2 = 0; // counts
    // int el1 = INT_MIN; // element 1
    // int el2 = INT_MIN; // element 2

    // // applying the Extended Boyer Moore's Voting Algorithm:
    // for (int i = 0; i < n; i++) {
    //     if (cnt1 == 0 && el2 != nums[i]) {
    //         cnt1 = 1;
    //         el1 = nums[i];
    //     }
    //     else if (cnt2 == 0 && el1 != nums[i]) {
    //         cnt2 = 1;
    //         el2 = nums[i];
    //     }
    //     else if (nums[i] == el1) cnt1++;
    //     else if (nums[i] == el2) cnt2++;
    //     else {
    //         cnt1--, cnt2--;
    //     }
    // }

    // vector<int> ls; // list of answers

    // // Manually check if the stored elements in
    // // el1 and el2 are the majority elements:
    // cnt1 = 0, cnt2 = 0;
    // for (int i = 0; i < n; i++) {
    //     if (nums[i] == el1) cnt1++;
    //     if (nums[i] == el2) cnt2++;
    // }

    // int mini = int(n / 3) + 1;
    // if (cnt1 >= mini) ls.push_back(el1);
    // if (cnt2 >= mini) ls.push_back(el2);

    // // Uncomment the following line
    // // if it is told to sort the answer array:
    // // sort(ls.begin(), ls.end()); //TC --> O(2*log2) ~ O(1);

    // return ls;
    }
};