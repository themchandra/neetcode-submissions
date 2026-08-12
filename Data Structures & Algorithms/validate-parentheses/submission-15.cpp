class Solution {
public:
    bool isValid(string s) {

        std::unordered_map<char,char> brackets = {
            {'(',')'},
            {'[',']'},
            {'{','}'}
        };

        std::stack<char> st;

        for (const auto &c : s) {

            // opening bracket
            if (brackets.contains(c)) {
                st.push(c);
            } else {
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

      
};
};
