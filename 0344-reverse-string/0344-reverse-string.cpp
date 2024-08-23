class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(),s.end());


        // int left = 0, right = s.size()-1;
        // while(left<=right){
        //     swap(s[left++],s[right--]);
        // }


        for(int i=0;i<s.size()/2;i++){
            swap(s[i],s[s.size()-1-i]);
        }
        
    }
};