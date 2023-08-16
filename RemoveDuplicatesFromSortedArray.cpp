//PROBLEM - 
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

//BEST SUBMISSION - refer to the article for explanation - 
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/solutions/3676877/best-method-100-c-java-python-beginner-friendly/
//code - 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //SUBMISSION 2 - same thought process as submission 1
        //but this is with less extra variables than before
        int i {1}, j{1};
        for ( ; i<nums.size(); i++) {
            if (nums[i] != nums[i-1]) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};

//MY SUBMISSION - 
//approach - 2 pointer
//code - 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //let no of unique elements be 'k'
        // I tried to use 2 pointer approach
        int length = nums.size();
        if (length == 1) return 1;
        int k = 0;
        int curr = -101; //keeping constraints in mind
        for (int i {0}, j{0}; i<length; i++) {
            if (curr != nums[i]) {
                k++;
                curr = nums[i];
                nums[j++] = curr;
            }
        }
        return k ;
    }
};

