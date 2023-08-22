//https://leetcode.com/problems/roman-to-integer/description/

/*note - zabardasti ki akal nahi lagani, dont evaluate pairwise - a mistake that you were doing repeatedly
Simply think this way - 
'All the character values of the string are added typically. The only time ith value is subtracted instead of adding, is when it is 
smaller than (i+1)th value.'*/

class Solution {
public:
    int romanToInt(string s) {

        int n = s.size();
        int i = n-2;
        int result = 0;

        unordered_map <char, int> umap ;
        umap['I'] = 1;
        umap['V'] = 5;
        umap['X'] = 10;
        umap['L'] = 50;
        umap['C'] = 100;
        umap['D'] = 500;
        umap['M'] = 1000;

        result += umap[s[n-1]];

    //intuition - if the numeral at current position's right is greater, then the
    //numeral at current position needs to be subtracted
        while (i>=0) {
            int curr = umap[s[i]];
            int right = umap[s[i+1]];
            if (curr < right) {
                result -= curr;
            }
            else {
                result += curr;
            }
            i--;
        }
        return result;
    }
};
