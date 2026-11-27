class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4) return {};
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 3; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < nums.size() - 2; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                long long newTarget = static_cast<long long>(target) - nums[i] - nums[j];
                int s = j + 1;
                int f = nums.size() - 1;
                while (s < f) {
                    if (static_cast<long long>(nums[s]) + nums[f] == newTarget) {
                        res.push_back({nums[i], nums[j], nums[s], nums[f]});
                        int currS = nums[s];
                        int currF = nums[f];
                        while (s < f && nums[s] == currS) ++s;
                        while (s < f && nums[f] == currF) --f;
                    }
                    else if (nums[s] + nums[f] > newTarget) --f;
                    else ++s;
                }
            }
        }
        return res;
    }
};