class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";

        std::string minElement = strs[0];
        for (const auto& s : strs) {
            if (minElement.size() > s.size()) {
                minElement = s;
            }
        }

        ostringstream res;
        for (int i = 0; i < minElement.size(); ++i) {
            bool flag = true;
            for (const auto& word : strs) {
                if (word[i] != minElement[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                res << minElement[i];
            }
            else {
                break;
            }
        }
        return res.str();
    }
};