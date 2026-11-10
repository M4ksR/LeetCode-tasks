class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        int letters[26] = {};
        
        for (int i = 0; i < s.size(); ++i) {
            ++letters[s[i] % 26];
            --letters[t[i] % 26];
        }

        for (int count : letters) {
            if (count != 0) return false;
        }
        return true;
    }
};