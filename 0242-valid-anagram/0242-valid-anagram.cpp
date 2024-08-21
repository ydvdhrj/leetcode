class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> a ,b;
        if(s.size()!=t.size()) return false;
        for(char c:s){
            a[c]++;
        }
        // for(char c:t){
        //     b[c]++;
        // }
        int count = s.length();
        for(char c:t){
            if(a.find(c)==0){
                return false;
            }
            a[c]--;
            count--;
        }
        for(auto it:a){
            if(it.second!=0){
                return false;
            }
        }
        if(count!=0){
            return false;
        }
        // return a==b;
        return true;
    }
};