class Solution {
public:
    bool isValid(string s) {

        unordered_map<char,char> brackets = {
            {'(',')'},
            {'{','}'},
            {'[',']'}
        };  

        // use LIFO invariant of stack to keep order of brackets
        stack<char> st;

        for (const auto &c : s) {

            // opening bracket
            if (brackets.contains(c)) {
                st.push(c);
            
            // closing bracket
            } else {

                if (!st.empty()) {
                    if (c == brackets[st.top()]) {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        } 

        // true if all opening brackets have a matching closing bracket
        return st.empty();

    }
};
