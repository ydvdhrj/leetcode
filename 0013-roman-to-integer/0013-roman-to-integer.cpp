class Solution {
public:
    int romanToInt(string s) {
        
        long long t=0;
        for(int i=0;i<size(s);i++){
            if(s[i]=='I'){
                
                if(s[i+1]=='V'){
                    t+=4;
                    i++;
                }
                else if(s[i+1]=='X'){
                    t+=9;
                    i++;
                }
                else
                t+=1;
            }
            else if(s[i]=='V'){
                t+=5;
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L'){
                    t+=40;
                    i++;
                }
                else if(s[i+1]=='C'){
                    t+=90;
                    i++;
                }
                else
                t+=10;
            }
            
            else if(s[i]=='L'){
                t+=50;
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D'){
                    t+=400;
                    i++;
                }
                else if(s[i+1]=='M'){
                    t+=900;
                    i++;
                }
                else
                t+=100;
            }
            else if(s[i]=='D'){
                t+=500;
            }
            else if(s[i]=='M'){
                t+=1000;
            }
            // else if(s[i]=='I' && s[i+1]=='V'){
            //     t+=4;
            //     i++;
            // }
            // else if(s[i]=='I' && s[i+1]=='X'){
            //     t+=9;
            //     i++;
            // }
            // else if(s[i]=='X' && s[i+1]=='L'){
            //     t+=40;
            //     i++;
            // }
            // else if(s[i]=='X' && s[i+1]=='C'){
            //     t+=90;
            //     i++;
            // }
            // else if(s[i]=='C' && s[i+1]=='D'){
            //     t+=400;
            //     i++;
            // }
            // else if(s[i]=='C' && s[i+1]=='M'){
            //     t+=900;
            //     i++;
            // }
        
            
        }
        return t;

    }
};