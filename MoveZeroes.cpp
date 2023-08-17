//PROBLEM - 
//https://leetcode.com/problems/move-zeroes/

//APPROACH - snow  ball technique
//SOLUTION 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //if you dont understand the approach below, check this article:
        //https://leetcode.com/problems/move-zeroes/solutions/172432/the-easiest-but-unusual-snowball-java-solution-beats-100-o-n-clear-explanation/
        int snowBall {0};
        for (int i {0}; i<nums.size(); i++) {
            if (nums[i] == 0) {
                snowBall++;
            }
            else if (snowBall > 0) {
                //if condition just so that we can handle [0] case
                swap(nums[i], nums[i-snowBall]);
            }
        }
    }
};
