class KthLargest {
private:
    int k;
    vector<int> nums;

public:
    KthLargest(int k, vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        this->k = k - 1;
        this->nums = nums;
    }
    
    int add(int val) {
        if (nums.size() == 0) {
            nums.push_back(val);
        }
        else if (val >= nums[0]) {
            nums.insert(nums.begin(), val);
        }
        else if (val <= nums[nums.size() - 1]) { 
            nums.insert(nums.end(), val);
        }
        else {
            auto it = nums.begin();
            while (*it > val) ++it;
            nums.insert(it, val);
        }

        return nums[k];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */