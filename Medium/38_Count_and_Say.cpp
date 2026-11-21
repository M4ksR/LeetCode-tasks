class Solution {
private:
    void RLE(string& str, int i, int n) {
        if (i == n) return;

        ostringstream res;
        int index = 0;
        int counter = 1;

        while (index < str.size()) {
            if (index < str.size() - 1) {
                if (str[index] == str[index + 1]) {
                    ++counter;
                }
                else {
                    res << counter << str[index];
                    counter = 1;
                }
            }
            ++index;
        }

        res << counter << str[index - 1];

        str = res.str();
        RLE(str, i + 1, n);
    } 
public:
    string countAndSay(int n) {
        string res = "1";
        RLE(res, 1, n);
        return res;
    }
};