class Solution {
private:
    pair<int,int> findBorder(const vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        if (l == r || nums[l] < nums[r]) return {-1, -1};

        while (r - l > 1) {
            int m = l + (r - l) / 2;
            if (nums[l] > nums[m]) r = m;
            else if (nums[m] > nums[r]) l = m;
        }

        return {l,r};
    }

    int binarySearch(const vector<int>& nums, int l, int r, int target) {
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (nums[m] < target) {
                l = m + 1;
            }
            else if (target < nums[m]) {
                r = m - 1;
            }
            else {
                return m;
            }
        }
        return -1;
    }

public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        pair<int, int> p = findBorder(nums);

        int r = p.first;
        int l = p.second;

        if (r == -1 && l == -1) { l = 0; r = n - 1;}

        int index = max(
            binarySearch(nums, 0, r, target),
            binarySearch(nums, l, n - 1, target)
        );

        if (index == -1 && nums[0] == target) {
            return 0;
        }
        return index;
    }
};