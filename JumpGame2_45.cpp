using namespace std;
#include <vector>

class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        int maxReach = 0;
        int cnt = 0;
        int nextIndex = 0;
        for (int i = 0; i < nums.size(); i++) {
            maxReach = max(i + nums[i], maxReach);

            if (i == nextIndex) {
                nextIndex = maxReach;
                cnt++;

                if (maxReach >= nums.size() - 1) {
                    return cnt;
                }
            }
        }
        return cnt;
    }
};
