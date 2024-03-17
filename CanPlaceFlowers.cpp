//https://leetcode.com/problems/can-place-flowers/description/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for (int i = 0; i<flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                if (i != 0 && flowerbed[i-1] == 1) continue;
                if (i != flowerbed.size()-1 && flowerbed[i+1] == 1) continue;
                flowerbed[i] = 1;
                count ++ ;
                //bhai ab ye waala potted ho gaya, toh ab iske next waala 
                //check karne ka faayda nahi
                i++;
            }
        }
        return (count >= n);
    }
};

