//https://leetcode.com/problems/add-strings/description/

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0;
        string s = "";
        
        while (i>-1 && j>-1) {
            int sum = (num1[i] - '0' + num2[j] - '0' + carry)%10 ;
            carry = (num1[i] - '0' + num2[j] - '0' + carry)/10 ;
            s += sum + '0';
            i--;
            j--;
        }

        while (i>-1) {
            int sum = (num1[i] - '0' + carry)%10 ;
            carry = (num1[i] - '0' + carry)/10 ;
            s += sum + '0';
            i--;
        }

        while (j>-1) {
            int sum = (num2[j] - '0' + carry)%10 ;
            carry = (num2[j] - '0' + carry)/10 ;
            s += sum + '0';
            j--;
        }

        if (carry > 0) {
            s += '1';
        }

        reverse(s.begin(), s.end());
        return s;
    }
};
