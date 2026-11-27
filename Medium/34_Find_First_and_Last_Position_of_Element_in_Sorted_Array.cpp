class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int l = 0;
        int r = n - 1;

        while (l <= r) {
            int m = l + (r - l) / 2;
            if (nums[m] <= target) l = m + 1;
            else r = m - 1;
        }
        int res2 = l - 1;

        l = 0;
        r = n - 1;

        while (l <= r) {
            int m = l + (r - l) / 2;
            if (nums[m] >= target) r = m - 1;
            else l = m + 1;
        }
        int res1 = r + 1;

        if (res2 < res1) return {-1, -1};
        return {res1, res2};
    }
};