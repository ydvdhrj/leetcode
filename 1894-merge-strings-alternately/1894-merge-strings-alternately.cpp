class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1 = word1.size();
        int l2 = word2.size();
        int n = l1<l2 ? l1 : l2;
        string s;
        for(int i=0;i<n;i++){
            s.append(word1.begin()+i,word1.begin()+i+1);
            s.append(word2.begin()+i,word2.begin()+i+1);
        }
        if(l1<l2){
            s.append(word2.begin()+n,word2.end());
        }
        else{
            s.append(word1.begin()+n,word1.end());
        }
        return s;
    }
};