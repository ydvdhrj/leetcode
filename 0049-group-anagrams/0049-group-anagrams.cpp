class Solution {
public:
string getCount(const string& s) {
        vector<int> count(26, 0);
        for (char c : s) {
            count[c - 'a']++;
        }
        string countStr;
        for (int i : count) {
            countStr += to_string(i) + '#';
        }
        return countStr;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        for(string s:strs){
            string temp = getCount(s);
            // sort(temp.begin(),temp.end());
            m[temp].push_back(s);
        }
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};