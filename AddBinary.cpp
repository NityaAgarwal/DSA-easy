// https://leetcode.com/problems/add-binary/description/

//Note - if you have understood the problem 'Add-Strings', then this will be a breeze to you

class Solution {
public:
    string addBinary(string a, string b) {
        int sum = 0;
        int carry = 0;
        int i = a.size()-1;
        int j = b.size()-1;
        string result = "";
        while (i>=0 && j>=0) {
            sum = a[i] - '0' + b[j] - '0' + carry;
            if (sum == 0) {
                result += "0";
                carry = 0;
            }
            else if (sum == 1) {
                result += "1";
                carry = 0;
            }
            else if (sum == 2) {
                result += "0";
                carry = 1;
            }
            
            else // sum == 3 
            {
                result += "1";
                carry = 1;
            }

            i--;
            j--;
        }
        while (i>=0) {
            sum = a[i] - '0' + carry;
            if (sum == 0) {
                result += "0";
                carry = 0;
            }
            else if (sum == 1) {
                result += "1";
                carry = 0;
            }
            else // (sum == 2)
            {
                result += "0";
                carry = 1;
            }
            i--;
        }
        while (j>=0) {
            sum = b[j] - '0' + carry;
            if (sum == 0) {
                result += "0";
                carry = 0;
            }
            else if (sum == 1) {
                result += "1";
                carry = 0;
            }
            else // (sum == 2)
            {
                result += "0";
                carry = 1;
            }
            
            j--;
        }
        if (carry == 1) {
                result += "1";
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
