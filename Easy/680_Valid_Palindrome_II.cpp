class Solution {
private:
    bool palindrome(const string& s, int l, int r) {
        while (l < r) 
            if (s[l++] != s[r--]) return false;
        return true;
    }

    bool check(const string& s) {
        int l = 0; 
        int r = s.size() - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                return palindrome(s, l + 1, r) || palindrome(s, l, r - 1);
            }
            ++l;
            --r;
        }
        return true;
    }

public:
    bool validPalindrome(string s) {
        return check(s);
    }
};