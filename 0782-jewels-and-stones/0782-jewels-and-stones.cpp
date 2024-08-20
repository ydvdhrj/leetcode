class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> a;
        for(int i=0;i<jewels.length();i++){
            a.insert(jewels[i]);
        }
        int ans=0;
        for(int i=0;i<stones.length();i++){
            auto it = a.find(stones[i]);
            if(it!=a.end()){
                ans++;
            }
        }
        return ans;
    }
};