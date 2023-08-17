//PROBLEM STATEMENT - 
//https://leetcode.com/problems/squares-of-a-sorted-array/description/

//APPROACH - 
// brute approach is very simple : square all elements in first pass, then sort in second pass.In-place, overall complexity : O(nlogn)
// BETTER SOLUTION - two pointers, but not in-place, overall complexity : O(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //new vector hi create karlo, dont know if in-place is possible
        //two pointer approach
        int length = nums.size();
        vector <int> answer (length,0);
        int i{0}, j{length -1};
        for (int p {length-1}; p>= 0; p--){
            if (abs(nums[i])>abs(nums[j])) {
                answer[p] = nums[i]*nums[i];
                i++;
            }
            else {
                answer[p] = nums[j]*nums[j];
                j--;
            }
        }
        return answer;
    }
};
