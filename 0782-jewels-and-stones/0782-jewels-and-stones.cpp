class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> a(jewels.begin(),jewels.end());
        
        int ans=0;
        for(char c:stones){
            
            if(a.find(c)!=a.end()){
                ans++;
            }
        }
        return ans;
    }
};