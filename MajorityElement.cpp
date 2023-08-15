/* PROBLEM DESCRIPTION - Array, level easy
https://leetcode.com/problems/majority-element/description/
*/

// SHORTEST SOLUTION - 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1 ||  n==2) return nums[0];
        sort(nums.begin(), nums.end());
        return nums[n/2];
    }
};

/* APPROACH -
The intuition behind this approach is that if an element occurs more than n/2 times
 in the array (where n is the size of the array), it will always occupy the middle position
  when the array is sorted. Therefore, we can sort the array and return the element at index n/2.
*/ 

/* MUST READ ARTICLE -
https://leetcode.com/problems/majority-element/solutions/3676530/3-method-s-beats-100-c-java-python-beginner-friendly/
*/ 

/*
MY FIRST SUBMISSION - 
int n = nums.size();  

        if (n == 1 || n == 2) return nums[0];

        int ans = 1000000001;
        int appears {0};
        sort(nums.begin(), nums.end());
        
        for (int i {0}; i<n; i++) {
            if (ans != nums[i]) { 
                ans = nums[i]; 
                appears = 0; 
            }
            appears ++ ; 
            if (appears > (n/2)) return ans; 

        }
        return 0;
*/ 

/*notes - 
        1. never use (sizeof(nums)/ sizeof(nums[0]) method to find the size of 
        vector as this will generate error
        2. deliberately initialised ans as 1000000001 so that it is outside the
        given range of the question)
        3. about the built-in sort function - it is a hybrid combination of quicksort, 
        mergesort and heapsort, and takes time complexity of about o(nlogn)
*/ 