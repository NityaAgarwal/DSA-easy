// https://leetcode.com/problems/palindrome-number/description/

// OBVIOUS SOLUTION - CONVERT TO STRING
class Solution {
public:
    bool isPalindrome(int x) {
        // obvious method - coverting integer to string
        string a = to_string(x);
        int i = 0;
        int j = a.size()-1;
        while (i<j) {
            if (a[i] != a[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

//OTHER SOLUTION
class Solution {
public:
    bool isPalindrome(int x) {
        //approach 2 : reversing the whole number
        if (x < 0) return false;

        long long reversed=0;
        long long temp=x;
        while (temp != 0) {
            reversed = reversed*10 + temp%10;
            temp /= 10;
        }
        return (reversed == x);
    }
};

//ONE MORE SOLUTION - REVERSING ONLY HALF OF THE NUMBER
// for this solution, refer to - Approach 2 of following article
// https://leetcode.com/problems/palindrome-number/solutions/3651712/2-method-s-c-java-python-beginner-friendly/
