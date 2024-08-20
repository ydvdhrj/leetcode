class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m;
        map<char,int> n;
        for(char i:magazine){
            m[i]++;
        }
        for(char i:ransomNote){
            n[i]++;
        }
        for(auto i:n){
            char key = i.first;
            int value1 = i.second;
            auto it = m.find(key);
            if(it!=m.end()){
                int value2 = it->second;
                if(value1>value2){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};