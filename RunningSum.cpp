/* PROBLEM DESCRIPTION - Array, level easy
https://leetcode.com/problems/running-sum-of-1d-array/
*/

// SHORTEST SOLUTION - 
/*
class Solution {
    public int[] runningSum(int[] nums) {

        for(int i=1;i<nums.length;i++){
            nums[i]=nums[i-1]+nums[i];

        }
        return nums;
    }
}*/ 

/*
MY FIRST SUBMISSION - 
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i<nums.size(); i++){
            sum += nums[i];
            nums[i] = sum;
        }

        return nums;
    }
};
*/ 