using namespace std;
#include <vector>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int potential = 0;

        for (int x: nums) {
            if (count == 0) {
                potential = x;
            }

            if (x == potential) {
                count++;
            } else {
                count--;
            }
        }

        return potential;
        
    }
};