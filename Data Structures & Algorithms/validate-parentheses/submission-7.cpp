class Solution {
public:
    bool isValid(string s) {

        unordered_map<char,char> pairs = {
            {'(',')'},
            {'{','}'},
            {'[',']'}
        };
        
        stack<char> st;

        for (const auto &c : s){

            // if opening brace push on stack
            if (pairs.contains(c)) {
                st.push(c);
            } else {
                // would be invalid if closing before opening
                if (st.empty()) {
                    return false;
                } else {
                    // last element in stack must be what we pop first
                    if (c == pairs[st.top()]) {
                        st.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};
