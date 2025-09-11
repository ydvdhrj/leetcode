class Solution {
public:
    string sortVowels(string s) {
        vector<int> indexes;
        vector<int> vowels;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                indexes.push_back(i);
                vowels.push_back((int)s[i]);
            }
        }
    sort(vowels.begin(),vowels.end());
    int m = indexes.size();
    for(int i=0;i<m;i++){
        s[indexes[i]]=(char)vowels[i];
    }
        return s;
    }
};