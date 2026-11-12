class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k = 0;
        int mx = 0;

        for (int num : nums) {
            if (num != 0) ++k;
            else {
                mx = max(mx, k); 
                k = 0;
            }
        }

        return max(mx, k);
    }
};