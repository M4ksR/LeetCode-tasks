class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;

        int mx = 0;
        while (l < r) {
            int h = min(height[l], height[r]);
            mx = max(mx, (r - l) * h);
            if (h == height[l]) ++l;
            else --r;
        }

        return mx;
    }
};