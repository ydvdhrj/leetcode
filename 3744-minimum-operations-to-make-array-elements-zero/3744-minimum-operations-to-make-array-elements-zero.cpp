#define ll long long
class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        // int res = 0;
        // for(const auto& q : queries){
        //     vector<int> v;
        //     // cout<<q[0]<<" "<<q[1];
        //     int sum=0;
        //     for(int i=q[1];i>=q[0];i--){
        //         int op = floor(0.5*log2(i))+1;
        //         cout<<op<<" ";
        //         sum+=op;
        //     }
            
        //     res+=ceil(sum/2.0);
            
        // }
        // return res;

        // optmized way
        ll ans=0;
        for(auto it:queries){
            ll l = it[0];
            ll r = it[1];
            ll prev = 1, operations = 0;
            for(ll depth=1;depth<16;depth++){
                ll curr = prev*4LL;

                ll start=max(prev,l);
                ll end=min(curr-1,r);

                int range = end>=start?end-start+1:0;
                operations += (range*depth);
                prev = curr;
            }
            ans += ceil(operations/2.0);
        }
        return ans;

    }
};
