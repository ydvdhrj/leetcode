class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string i:tokens){
            if(i=="+"){
                int sum = s.top();
                s.pop();
                sum+=s.top();
                s.pop();
                s.push(sum);
            }
            else if(i=="-"){
                int dif = s.top();s.pop();
                dif-=s.top();s.pop();
                s.push(dif*-1);
            }
            else if(i=="*"){
                int mul = s.top();s.pop();
                mul*=s.top();s.pop();
                s.push(mul);
            }
            else if(i=="/"){
                int den = s.top();s.pop();
                int num = s.top();s.pop();
                int div = num/den;
                s.push(div);
            }
            else{
                s.push(stoi(i));
            }
        }
        
        return s.top();
    }
};