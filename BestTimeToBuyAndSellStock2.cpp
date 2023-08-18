//PROBLEM - 
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

//HINT: tweak the first part

//SOLUTION :
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        bool already_bought = false;
        int left = 0; // buy
        int right = 1; // sell
        int max_profit = 0;
        int profit = 0;
        while (right<prices.size()) {
            if (prices[left]>prices[right]) {
                left = right;
            }
            else {
                profit = prices[right] - prices[left];
                max_profit += profit;
                left ++;
            }
            right ++;
        }
        return max_profit;
    }
};
