//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char>myStack;
        for (int i = 0; i<s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {myStack.push(s[i]); continue;}
            if (s[i] == ')' && !myStack.empty() && myStack.top() == '(') {myStack.pop(); continue;}
            if (s[i] == '}' && !myStack.empty() && myStack.top() == '{') {myStack.pop(); continue;}
            if (s[i] == ']' && !myStack.empty() && myStack.top() == '[') {myStack.pop(); continue;}
            return false;
        }
        return myStack.empty();
    }
};
