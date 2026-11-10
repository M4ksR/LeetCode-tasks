class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numbers;
        for (auto num : nums) {
            if (numbers.find(num) == numbers.end()) {
                numbers.insert(num);
            }
            else {
                return true;
            }
        }
        return false;
    }
};