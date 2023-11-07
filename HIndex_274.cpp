using namespace std;
#include <vector>

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(), citations.rend());
        // if (citations.size() == 1 && citations[0] == 0) return 0;
        // if (citations.size() == 1) return 1;
        int h = 0;
        for (int i = 1; i <= citations.size(); i++) {
            if (citations[i - 1] >= i) {
                h = i;
            } else {
                break;
            }
        }
        return h;
    }
};