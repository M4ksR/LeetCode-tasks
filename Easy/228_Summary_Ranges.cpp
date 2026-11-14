class Solution {
private:
    string getString(int start, int end) {
        return (start != end) ? 
            to_string(start) + "->" + to_string(end) : 
            to_string(start);
    }
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int l = 0;

        vector<string> res;
        for (int r = 0; r < nums.size(); ++r) {
            if (r > 0 && static_cast<long long>(nums[r]) - nums[r-1] != 1) {
                res.push_back(getString(nums[l], nums[r-1]));
                l = r;
            }
            if (r == nums.size() - 1) {
                res.push_back(getString(nums[l], nums[r]));
            }
        }

        return res;
    }
};