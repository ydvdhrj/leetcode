class Solution {
public:
    int myAtoi(string s) {
        //ignoring leading whitesoace
        //checking sign
        //skipping leading zero
        //if non digit character appear then return
        //put integer in range -2^31 to 2^31-1
        long ans = 0;
        bool FirstDigit = false;
        int Sign = 1;
        // int a = pow(2,31)-1;
        // int b = pow(-2,31);
        // if(s>"a") s=a;
        // else if(s<"b") s=b;
        for(char i:s){
            if(!FirstDigit){
                if(i>='0' && i<='9'){
                    ans = ans*10 + (int)i-48;
                    FirstDigit = true;
                }
                else{
                    if(i==' ') continue;
                    else if(i=='-'|| i=='+'){
                      FirstDigit = true;
                      if(i=='-')  
                        Sign = -1;
                    }
                    else return ans;
                }
            }
            else{
                if(i>='0' && i<='9'){
                    ans = ans*10 + (int)i-48;
                    if(ans>INT_MAX && Sign==-1)
                    return INT_MIN;
                    else if(ans>INT_MAX &&Sign==1)
                        return INT_MAX;
                }
                else{
                     return ans*Sign;
                }
            }
        }
        return ans*Sign;
    }
};