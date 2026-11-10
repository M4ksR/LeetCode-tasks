class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int mx = nums.size();        
        int sum = 0;
        
        for (int num : nums) sum += num;

        return mx * (mx + 1) / 2 - sum;
    }
};