class Solution {
public:
    bool check(int a){
        while(a>0){
            if(a%10==0) return false;
            else{
                a = a/10;
            }
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        int i=1;
        vector<int> ans;
        while(i<n){
            if(check(i) && check(n-i)){
                ans.push_back(i);
                ans.push_back(n-i);
                break;
            }
            i++;
        }
        return ans;
    }
};