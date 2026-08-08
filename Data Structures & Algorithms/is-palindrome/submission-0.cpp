class Solution {
public:
    bool isPalindrome(string s) {
        int front = 0;
        int back = s.size()-1;

        // convert to all lowercase
        for (auto &c : s){
            c = tolower(static_cast<unsigned char>(c));
        }

        while (front < back) {
            if (not isalnum(s[front])) {
                front++;
                continue;
            }

            if (not isalnum(s[back])) {
                back--;
                continue;
            }

            if (s[front] != s[back]) {
                return false;
            }
            front++;
            back--;
        }
        return true;
    }
};
