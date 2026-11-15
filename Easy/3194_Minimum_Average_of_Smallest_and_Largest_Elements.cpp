class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        double res = -1;
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            double average = static_cast<double>(nums[l] + nums[r]) / 2;
            res = (res == -1) ? average : min(res, average);
            ++l;
            --r;
        }

        return res;
    }
};