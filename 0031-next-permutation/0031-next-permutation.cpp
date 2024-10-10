class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //By predefined algorithm
        // next_permutation(nums.begin(),nums.end());

        // Another way
        
        // finding break point
        int ind = -1;
        int n = nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind = i;
                break;
            }
        }

        // checking break point existed or not
        if(ind==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            // getting next permutation
            // swaping with first greater element
            for(int i=n-1;i>ind;i--){
                if(nums[i]>nums[ind]){
                    swap(nums[ind],nums[i]);
                    break;
                }
            }
            // reversing the right half array
            reverse(nums.begin()+ind+1,nums.end());
        }
    }
};