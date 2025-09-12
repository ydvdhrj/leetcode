class Solution {
public:
    bool doesAliceWin(string s) {
        bool isvowel = false;
        for(char i:s){
            if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
                isvowel = true;
            }
        }
        if(!isvowel) return false;
        return true;
    }
};