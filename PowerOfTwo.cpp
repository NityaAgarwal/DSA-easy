// https://leetcode.com/problems/power-of-two/description/

// SOLUTION - 
class Solution {
public:
    bool isPowerOfTwo(int n) {
        //negative no.s cant be powers
        if (n <= 0) return false;

        //the binary rep of the number must have only single set bit
        //in other words, the  n&(n-1) concept must yield 0 in first time only
        if (n&(n-1)) return false;
        return true;
    }
};

// EXPLANATION - 
// https://leetcode.com/problems/power-of-two/solutions/1638707/python-c-java-detailly-explain-why-n-n-1-works-1-line-100-faster-easy/
