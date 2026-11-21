class Solution {
private:
    void getCodes(string& digits,
                vector<string>& res,
                unordered_map<char,string>& mp,
                string currString,
                int index) {

        if (currString.size() == digits.size()) {
            res.push_back(currString);
            return;
        }

        char st = digits[index];
        for (char ch : mp[st]) {
            getCodes(digits, res, mp, currString + ch, index + 1);
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) return {};

        vector<string> res;

        unordered_map<char,string> mp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        getCodes(digits, res, mp, "", 0);

        return res;
    }
};