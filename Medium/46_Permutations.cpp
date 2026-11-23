class Solution {
private:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        while (i >= 0 && nums[i] >= nums[i + 1]) {
            --i;
        }

        if (i >= 0) {
            int j = n - 1;
            while (nums[i] >= nums[j]) {
                --j;
            }
            swap(nums[i], nums[j]);
        }

        reverse(nums.begin() + i + 1, nums.end());
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> start = nums;

        while (true) {
            res.push_back(nums);
            nextPermutation(nums);
            if (nums == start) break;
        }

        return res;
    }
};