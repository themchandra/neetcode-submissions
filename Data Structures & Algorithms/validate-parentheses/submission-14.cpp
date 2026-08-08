class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> brackets = {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };

        stack<char> st;

        for (const auto &c : s) {

            // opening bracket
            if (brackets.contains(c)) {
                st.push(c);

            // closing bracket
            } else {
                // invalid if closing bracket first
                if (st.empty()) {
                    return false;
                }

                if (c == brackets[st.top()]) {
                    st.pop();
                } else {
                    return false;
                }
            }

        }
        return st.empty();
    }
};
