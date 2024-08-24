class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        for(char i:s){
            if(i>='a' && i<='z'){
                v.push_back(i);
            }
            else if(i>='A' && i<='Z'){
                v.push_back(tolower(i));
            }
            else if(i>='0'&&i<='9'){
                v.push_back(i);
            }
        }
        int left=0;
        int right=v.size()-1;
        // if(v.size()==0){
        //     return true;
        // }
        while(left<=right){
            if(v[left]!=v[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};