class Solution {
private:
    double pow(double x, long long n) {
        double res = 1;
        while (n) {
            if ((n & 1) != 0) res *= x;
            x *= x;
            n >>= 1;
        }
        return res;
    }
public:
    double myPow(double x, int n) {
        long long power = n;
        if (power < 0) return 1 / pow(x, -power);
        return pow(x, power);
    }
};