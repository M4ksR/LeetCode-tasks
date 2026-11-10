class Solution {
public:
    int hammingWeight(int n) {
        int k = 0;
        while (n) {
            k += (n & 1);
            n >>= 1;
        }
        return k;
    }
};