#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = size(nums);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != val){
                nums[cnt] = nums[i];
                cnt++;

            }
        }
        return cnt;
    }
};