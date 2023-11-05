using namespace std;
#include <vector>

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // initial Approach
        //  Failed runtime
        // int n = size(nums);
        // while (k != 0) {
        //     nums.insert(nums.begin(),nums[n-1]);
        //     nums.pop_back();
        //     k--;
        // }
        // Second Approach
        // assumed k < size(nums)
        if (size(nums) == 1 || k == 0) return;
        k = k%nums.size();
        vector<int>::iterator start = nums.end() - k;
        vector<int> first_half(start,nums.end());
        vector<int> second_half(nums.begin(),start);
        first_half.insert(first_half.end(),second_half.begin(),second_half.end());
        nums = first_half;

        // int k = k%nums.size();
        // reverse(nums.begin(),nums.begin())

    }
};