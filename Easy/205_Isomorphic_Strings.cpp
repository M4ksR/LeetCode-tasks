class Solution {
    bool check(const string& a, const string& b) {
        unordered_map<char,char> mapa;
        for (int i = 0; i < a.size(); ++i) {
            if (mapa.find(a[i]) != mapa.end()) {
                if (mapa[a[i]] != b[i]) {
                    return false;
                }
            }
            else {
                mapa[a[i]] = b[i];
            }
        }
        return true;
    }
public:
    bool isIsomorphic(string s, string t) {
        return check(s,t) && check(t,s);
    }
};