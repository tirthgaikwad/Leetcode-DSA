class Solution {
public:
    // bool isAlphaNum(char ch) {
    //     return (ch >= '0' && ch <= '9') ||
    //            (tolower(ch) >= 'a' && tolower(ch) <= 'z');
    // }

    bool isPalindrome(string s) {
        int st = 0;
        int end = s.length() - 1;

        while (st < end) {

            if (!isalnum(s[st])) {
                st++;
                continue;
            }

            if (!isalnum(s[end])) {
                end--;
                continue;
            }

            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            st++;
            end--;
        }

        return true;
    }
};