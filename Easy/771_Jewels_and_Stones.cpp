class Solution {
private:
public:
    int numJewelsInStones(string jewels, string stones) {
        bool jewelsList[128] = {};
        for (char ch : jewels) {
            jewelsList[ch] = true;
        }

        int k = 0;
        for (char ch : stones) {
            if (jewelsList[ch]) ++k;
        }

        return k;
    }
};