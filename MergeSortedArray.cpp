// PROBLEM - 
// https://leetcode.com/problems/merge-sorted-array/description/

//SOLUTION - 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //two pointer approach - 
        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while (j>=0) {
            if (i>=0 && nums1[i]>nums2[j]) {
                nums1[k--] = nums1[i--];
            }
            else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};

//approach - two pointer. 
//use this video for understanding the concept
//https://www.youtube.com/watch?v=-gjxg6Pln50

//note - when i thought of using two pointer approach, i only thought of
//using the pointers i and j from the start of the vectors nums1 and nums2
//but that didnt work

//my point being, it doesnt always have to be from the start, 
//2 pointer approach can be thought in other ways too, like

//1. pointers working from the ends
//2. one from the end, other from the start
//3. both from the start, one fast but other slow
