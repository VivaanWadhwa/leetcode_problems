using namespace std;
#include <vector>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int cheapestPrice = prices[0];
        for (int x: prices) {
            if (x < cheapestPrice) {
                cheapestPrice = x;
            }
            if ((x - cheapestPrice) > maxProfit) {
                maxProfit = x - cheapestPrice;
            }
        }
        return maxProfit;
    }
};