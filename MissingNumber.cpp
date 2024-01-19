//https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //approach 2 
        //say n = 2, so actual range should be 0,1,2
        //say, 1 is missing, so given set is something like [2, 0]
        //sum(actual range) - sum(given range) = required number

        //actual range's max will be size of the input array
        int n = nums.size();
        int total_sum = (n*(n+1))/2;
        int sum = 0;
        for (int i = 0; i<n; i++) {
            sum += nums[i];
        }
        return total_sum - sum;
    }
};
