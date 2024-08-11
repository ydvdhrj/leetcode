class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int n = strs.size();
        int m = 0;
        for(int i=1;i<n;i++){
            if(strs[i].size()<strs[i-1].size()){
                m = i; 
            }
        }
        int p = strs[m].size();
        for(int i=0;i<p;i++){
            for(int j=0;j<n;j++){
                if(strs[m][i]!=strs[j][i]){
                    return s;
                }
            }
                s.push_back(strs[m][i]);
        }
        return s;
        
    }
};