class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        s.push(0);
        for(int i=0;i<operations.size();i++){
            if(operations[i][0]>='0' && operations[i][0]<='9'){
                s.push(stoi(operations[i]));
                
            }
            else if(operations[i][0]=='-'){
                s.push(stoi(operations[i]));
                
            }
            else if(operations[i]=="+"){
                int temp = s.top();
                int sum = temp;
                s.pop();
                sum+=s.top();
                s.push(temp);
                s.push(sum);
            }
            else if(operations[i]=="D"){
                s.push(s.top()*2);
            }
            else if(operations[i]=="C"){
                s.pop();
            }
        }
        int ans=0;
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};