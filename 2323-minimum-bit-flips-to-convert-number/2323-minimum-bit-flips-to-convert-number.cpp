class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = start^goal;
        // bitset<30> binary(count);
        return __builtin_popcount(count);

    }
};