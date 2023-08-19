// PROBLEM STATEMENT - 
// https://leetcode.com/problems/valid-palindrome-ii/description/

// THINK ABOUT THESE TESTCASES
// TC-2: "abca"
// TC-3: "abc" - this test case is the ultimate trojan forse for me, idk why
// TC-4: "eedede" 
/* TC-5: "deeee" - this test case teaches you that you have to check which pointer to move. Uptil this case, I had been blindly moving the right pointer, as if
                   the left pointer could never be incorrect character */
// TC-6: "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga"

// SOLUTION
class Solution {
public:
    bool is_remaining_palindrome (int l, int r, string s) {
        while (r > l) {
            if (s[l] == s[r]) {
                l++;
                r--;
                continue;
            }
            return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        while (r > l) {
            if (s[l] == s[r]) {
                l++;
                r--;
                continue;
            }
            return (is_remaining_palindrome(l+1, r, s) || is_remaining_palindrome(l, r-1, s));
        }
        return true;
    }
};

// EXPLANATION OF CODE -
// https://leetcode.com/problems/valid-palindrome-ii/solutions/3839145/two-pointers-solution-with-detailed-explanation/
