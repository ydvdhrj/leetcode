class Solution {
public:
    // char fun(string & word, int i, int k){
        
    //     if(i>=sqrt(k)+1){
    //         return word[k-1];
    //     }
    //     int n = word.length();
    //     for(int j=0;j<n;j++){
    //         char c = word[j];
    //         char next;
    //         next= (c=='z')?'a':c+1;
    //         cout<<next;
    //         word.push_back(next);
    //     }
    //     return fun(word,i+1,k);
    // }
    char kthCharacter(int k) {
        // string word = "a";
        // int i=0;
        // return fun(word,i,k);
        // for(int i=0;i<sqrt(k)+1;i++){

        //     int n = word.length();
        //     for(int j=0;j<n;j++){
        //         char c = word[j];
        //         char next;
        //         next= (c=='z')?'a':c+1;
        //         cout<<next;
        //         word.push_back(next);
        //     }
        // }
        // return word[k-1];
        int ans=0;
        int t;
        while(k!=1){
            t = __lg(k);//it will give floor of log(k) base 2
            if((1<<t)==k){
                t--;
            }
            k = k-(1<<t);
            ans++;
        }
        return 'a'+ans;
    }
};