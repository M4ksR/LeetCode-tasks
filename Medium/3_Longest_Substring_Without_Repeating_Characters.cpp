/*
Первый вариант - массив ASCII индексов
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx = 0;
        for (int i = 0; i < s.size(); ++i) {
            bool letters[128] = {0};
            for (int j = i; j < s.size(); ++j) {
                int index = s[j];
                if (letters[index]) break;
                letters[index] = true;
                mx = max(mx, j - i + 1);
            }
        }
        return mx;
    }
};

/*
Второй вариант - метод скользящего окна
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int l = 0;
        int mx = 0;
        for (int r = 0; r < s.size(); ++r) {
            while (mp[s[r]] == 1) {
                --mp[s[l]];
                ++l;
            }
            mx = max(mx, r - l + 1);
            ++mp[s[r]];
        }
        return mx;
    }
};

/*
Третий вариант - переброс левого указателя
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int l = 0;
        int mx = 0;
        for (int r = 0; r < s.size(); ++r) {
            if (mp.find(s[r]) != mp.end() && l <= mp[s[r]]) {
                l = mp[s[r]] + 1;
            }
            mx = max(mx, r - l + 1);
            mp[s[r]] = r;
        }
        return mx;
    }
};