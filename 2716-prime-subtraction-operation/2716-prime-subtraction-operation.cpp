class Solution {
private:
    bool isSorted(vector<int>& nums, int n){
        bool ans = true;
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]) ans = false;
        }
        return ans;
    }
    bool isPrime(int n){
        if(n<=1) return false;
        for(int i=2;i<n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int primeDiff(int num, int prev){
        int mini = num;
        for(int i=2;i<num;i++){
            if(isPrime(i)){
                int temp = num-i;
                if(temp>prev) mini = temp;
                else break;
            }
        }
        return mini;
    }
public:
    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();
        if(isSorted(nums,n)) return true;
        bool sol = false;
        for(int i=0;i<n;i++){
            if(i==0){
                nums[i]=primeDiff(nums[i],0);
            }
            else{
                nums[i]=primeDiff(nums[i],nums[i-1]);
            }
            if(isSorted(nums,n)){
                sol = true;
                break;
            }
        }
        return sol;
    }
};