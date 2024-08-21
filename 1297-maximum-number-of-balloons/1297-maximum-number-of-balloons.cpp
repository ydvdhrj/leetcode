class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0,a=0,l=0,o=0,n=0;
        for(char c:text){
            if(c=='b') b++;
            else if(c=='a') a++;
            else if(c=='l'){
                l++;
            }
            else if(c=='o'){
                o++;
            }
            else if(c=='n'){
                n++;
            }
        }
        // int min = b;
        // l=l/2;
        // o=o/2;
        // if(a<min){
        //     min=a;
        // }
        // if(n<min){
        //     min = n;
        // }
        // if(l<min){
        //     min=l;
        // }
        // if(o<min){
        //     min=o;
        // }
        // int sum = b+a+l/2+o/2+n;
        return min({b,a,l/2,o/2,n});

    }
};