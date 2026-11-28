class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            nums1.swap(nums2);
        }

        int n = nums1.size();
        int m = nums2.size();
        int commonSize = n + m;
        int lenHalf = (commonSize + 1) / 2;

        int l = 0;
        int r = n - 1;

        while (true) {
            int m1 = l + (r - l) / 2;
            int m2 = lenHalf - m1;

            int leftNums1 = (m1 > 0) ? nums1[m1 - 1] : INT_MIN;
            int rightNums1 = (m1 < n) ? nums1[m1] : INT_MAX;
            int leftNums2 = (m2 > 0) ? nums2[m2 - 1] : INT_MIN;
            int rightNums2 = (m2 < m) ? nums2[m2] : INT_MAX;

            if (leftNums1 > rightNums2) {
                r = m1 - 2;
            }

            else if (leftNums2 > rightNums1) {
                l = m1 + 2;
            }

            else {
                if (commonSize % 2 != 0) {
                    return max(leftNums1, leftNums2);
                }
                else {
                    return static_cast<double>(max(leftNums1, leftNums2) + min(rightNums1, rightNums2)) / 2;
                }
            }
        }
    }
};