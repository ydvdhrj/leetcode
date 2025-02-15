class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
         stack<int>s;
        vector<int>v;

        for(int i:arr)
        {
            if(s.empty() || i>0)
            {
                s.push(i);
            }
            else
            {
                while(!s.empty() && s.top()>0 && s.top()<abs(i))
                {
                    s.pop();
                }

                if(!s.empty() && s.top()==abs(i))
                {
                    s.pop();
                }
                else
                {
                    if(s.empty() || s.top()<0)
                    {
                        s.push(i);

                    }
                }
            }
        }

        while(!s.empty())
        {
            v.push_back(s.top());
            s.pop();
        }

        reverse(v.begin(),v.end());


        return v;
    }
};