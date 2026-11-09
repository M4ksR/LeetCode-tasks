class Solution {
    int sum(int n) {
        int summ = 0;
        while (n) {
            int tmp = n % 10;
            summ += tmp * tmp;
            n /= 10;
        }
        return summ;
    }
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        do {
            slow = sum(slow);
            fast = sum(sum(fast));
        } while (slow != fast);

        return slow == 1;
    }
};