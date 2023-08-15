/* PROBLEM DESCRIPTION - Array, level easy
https://leetcode.com/problems/find-pivot-index/description/
*/

// SOLUTION - 
/*
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(); 
        if (n == 1) return 0;
        int prefix {0};
        int suffix {0};
        for (int i {1}; i<n; i++) {
            suffix += nums[i]; 
        }

        int i;
        for (i = 0; i<n-1; i++ ) {

            if (prefix == suffix) return i;
            prefix += nums[i]; 
            suffix -= nums[i+1]; 
        }
        // for last element (boundary condition due to suffix)
        if (prefix == suffix) return i;

        return -1;
    }
};
*/ 

/* APPROACH -
Concept of prefix sum and suffix sum
*/ 

/* MUST WATCH VIDEO -
https://www.youtube.com/watch?v=qmlrMrIObvs
*/ 
