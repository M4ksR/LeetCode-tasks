class Solution {
private:
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i + 1;
            int r = n - 1;

            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                int leftValue = nums[l];
                int rightValue = nums[r];
                if (sum < 0) ++l;
                else if (sum > 0) --r;
                else {
                    res.push_back(vector<int>{nums[i], nums[l], nums[r]});
                    while (l < r && nums[r] == rightValue) --r;
                    while (l < r && leftValue == nums[l]) ++l;
                }
            }
        }
        return res;
    }
};