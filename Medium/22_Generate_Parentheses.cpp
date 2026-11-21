class Solution {
private:
    void getParentheses(vector<string>& res,
                        string& currString,
                        int openPar,
                        int closePar, 
                        int openParAbs,
                        int n) {

        if (openParAbs == n && closePar == n) {
            res.push_back(currString);
            return;
        }

        if (openPar != 0) {
            currString.push_back(')');
            getParentheses(
                res, 
                currString, 
                openPar - 1, 
                closePar + 1, 
                openParAbs,
                n
            );
            currString.pop_back();
        }

        if (openParAbs != n) {
            currString.push_back('(');
            getParentheses(
                res, 
                currString, 
                openPar + 1,
                closePar, 
                openParAbs + 1,
                n
            );
            currString.pop_back();
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string currString;
        getParentheses(res, currString, 0, 0, 0, n);
        return res;
    }
};