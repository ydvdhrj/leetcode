class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> a;
        for(char c:s){
            a[c]++;
        }
        for(char c:t){
            if(a.find(c)==0){
                return false;
            }
            a[c]--;
        }
        for(auto it:a){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};