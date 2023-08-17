//problem statement - 
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//SOLUTION - 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //APPROACH - TWO POINTER
        //for explanation of the code, refer to the link below
        //https://leetcode.com/problems/best-time-to-buy-and-sell-stock/solutions/1735550/python-javascript-easy-solution-with-very-clear-explanation/
        int left = 0; //buy
        int right = 1; //sell
        int max_profit = 0;
        int profit;
        while (right<prices.size()){
            if (prices[left] < prices[right]){
                profit = prices[right]-prices[left];
                max_profit = (max_profit > profit) ? max_profit : profit;
                //in the line above you can simply use the maximum function too
                //instead of ternary operator
            }
            else {
                left = right ;
            }

            right ++;
        }

        return max_profit;
    }
};

//SOLUTION THAT I HAD THOUGHT OF -
//NOTE - THIS IS NOT WORKING, I TRIED DRY-TESTING BUT STILL CANT FIND MY MISTAKE, PLEASE CHECK THIS LATER ON
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //two pointer approach
        int n = prices.size();
        int buy_day{0}, sell_day{n-1};
        //first i'll store everything in hashmap
        unordered_map <int, int> umap;
        for (int i {0}; i<n; i++){
            umap[prices[i]] = i;
        }
        //now i will sort the array, this ensures that sellPrice - buyPrice is always > 0
        sort(prices.begin(), prices.end());
        while (buy_day < n-1) {
            if (buy_day = sell_day) {
                //then reset
                buy_day ++;
                sell_day = n-1;
            }
            if (umap[prices[sell_day]]-umap[prices[buy_day]] <= 0) {
                sell_day --;
            }

            else {
                return (prices[sell_day] - prices[buy_day]);
            } 
        }

        return 0;
    }
};
*/
