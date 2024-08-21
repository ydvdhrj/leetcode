class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0,a=0,l=0,o=0,n=0;
        for(int i=0;i<text.length();i++){
            if(text[i]=='b') b++;
            else if(text[i]=='a') a++;
            else if(text[i]=='l'){
                l++;
            }
            else if(text[i]=='o'){
                o++;
            }
            else if(text[i]=='n'){
                n++;
            }
        }
        int min = b;
        l=l/2;
        o=o/2;
        if(a<min){
            min=a;
        }
        if(n<min){
            min = n;
        }
        if(l<min){
            min=l;
        }
        if(o<min){
            min=o;
        }
        // int sum = b+a+l/2+o/2+n;
        return min;

    }
};