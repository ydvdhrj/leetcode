// class Solution {
// public:
//     long long minOperations(vector<vector<int>>& queries) {
//         int res = 0;
//         int twos=0;
//         bool ones=0;
//         for(const auto& q : queries){
//             vector<int> v;
//             cout<<q[0]<<" "<<q[1];
//             for(int i=q[1];i>=q[0];i--){
//                 int op = floor(0.5*log2(i))+1;
//                 if(op==2){
//                     twos++;
//                 }
//                 if(op==1){
//                     ones=1;
//                 }
//                 cout<<op<<" ";
//                 v.push_back(op);
//             }
//             for(int j=0;j<v.size();j+=2){
//                 if(j+1<v.size()){
//                     if(v[j]==v[j+1]){
//                     res+=v[j];
//                     }
//                     else if(v[j]>v[j+1]){
//                         res+=v[j+1];
//                         v.push_back(1);
//                     }
//                 }
//                 else{
//                     res+=v[j];
//                 }
                
//             }
//         }
//         if(twos%2==1 && !ones){
//             res-=1;
//         }
//         return res;
//     }
// };

class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        long long ans = 0;
        for (auto &q : queries) {
            int l = q[0], r = q[1];
            long long S = 0;
            int dMax = 0;

            for (int k = 1; k <= 31; k++) {
                long long low = 1LL << (k - 1);
                long long high = (1LL << k) - 1;
                if (low > r) break;
                long long a = max((long long)l, low);
                long long b = min((long long)r, high);
                if (a > b) continue;
                long long cnt = b - a + 1;
                int stepsForK = (k + 1) / 2;
                S += cnt * stepsForK;
                dMax = max(dMax, stepsForK);
            }

            long long ops = max((long long)dMax, (S + 1) / 2);
            ans += ops;
        }
        return ans;
    }
};