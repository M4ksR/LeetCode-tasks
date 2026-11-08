class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) {
            if (st.empty()) {
                st.push(ch);
            }
            else {
                switch (ch) {
                    case ')':
                        if (st.top() == '(') {
                            st.pop();
                            break;
                        }
                        else {
                            return false;
                        }
                    case ']':
                        if (st.top() == '[') {
                            st.pop();
                            break;
                        }
                        else {
                            return false;
                        }
                    case '}':
                        if (st.top() == '{') {
                            st.pop();
                            break;
                        }
                        else {
                            return false;
                        }
                    default:
                        st.push(ch);
                }
            }
        }
        if (!st.empty()) { return false; }
        return true;
    }
};