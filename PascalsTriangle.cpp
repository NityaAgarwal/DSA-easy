//PROBLEM STATEMENT - 
//https://leetcode.com/problems/pascals-triangle/description/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer ;
        for (int i = 0; i<numRows; i++) {
            answer.push_back(vector<int>(i+1, 1));
        }
        for (int i = 2; i<numRows; i++) {
            for (int j = 1; j < answer[i].size() -1; j++) {
                answer[i][j] = answer[i-1][j-1] + answer[i-1][j];
            }
        }
        return answer;
    }
};
