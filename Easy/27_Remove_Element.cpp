class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (auto it = nums.begin(); it != nums.end();) {
            if (*it != val) {
                ++k;
                ++it;
            }
            else {
                it = nums.erase(it);
            }
        }
        return k;
    }
};