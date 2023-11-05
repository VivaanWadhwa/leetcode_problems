#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& val) {
        vector<int> answer;
        int last = val[0];
        answer.push_back(val[0]);
        int cnt = 1;
        for (int i = 1; i < size(val) ; i++) {
            if (val[i] != last) {
                answer.push_back(val[i]);
                last = val[i];
                cnt++;
            }
            
        }
        val = answer;
        return cnt;
    }
};