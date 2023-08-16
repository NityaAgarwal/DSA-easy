//PROBLEM - 
// https://leetcode.com/problems/two-sum/solutions/3619262/3-method-s-c-java-python-beginner-friendly/

// RESOURCES TO REFER TO - 
//1. https://www.youtube.com/watch?v=-gjxg6Pln50 (till before half of the video)
//2. https://leetcode.com/problems/two-sum/solutions/3619262/3-method-s-c-java-python-beginner-friendly/

//SOLUTION - 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //we could think of 2pointer approach, starting wider and ending narrower
        //but that is more feasible when we have sorted array

        //lets use hashtable here
        //benefits of hashmap - 
        //1. insertion and retrieval take O(1) complexity
        //2. able to maintain key and value (so its good whenever you have to keep 
        //   track of indices)
        
        unordered_map <int, int> numsMap;
        //fill the map
        int n = nums.size();
        for (int i {0}; i<n; i++) {
            numsMap[nums[i]] = i;
        }

        //find if the complement exists
        for (int i {0}; i<n; i++) {
            int complement = target - nums[i];
            if (numsMap.count(complement) && numsMap[complement] != i) {
                //condition 1 : complement exists
                //condition 2 : the indices are different (to ensure that
                //same element has not been chosen)
                return {i, numsMap[complement]};
            }
        }

        return {};
    }
};
