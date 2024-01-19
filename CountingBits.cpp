//https://leetcode.com/problems/counting-bits/description/

class Solution {
public:
    vector<int> countBits(int n) {
        /*
        0 - 0000
        1 - 0001
        2 - 0010
        3 - 0011
        4 - 0100
        5 - 0101
        6 - 0110
        7 - 0111
        8 - 1000
        9 - 1001
        */
        /*from above we can clearly notice a few things - we see  that 
        for every power of 2, the number of 1s is the same - it is just a 
        single 1 and only its position changes
        For all other numbers, it is 1+numberOf1s in the number that was
        recent-most-power-of-2 back*/
        vector<int>ans;
        ans.push_back(0); //this is for the first number that is 0
        int offset = 1; //because 2^0 = 1
        int change_offset;
        for (int i = 1; i<=n; i++) {
            change_offset = 2*offset;
            if (i == change_offset) {
                //it means i is a power of 2
                //so we need to update the offset
                offset = change_offset;
            }
            ans.push_back(1+ans[i-offset]);
        }
        return ans;
    }
};
