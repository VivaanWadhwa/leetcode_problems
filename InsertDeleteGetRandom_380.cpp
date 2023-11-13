using namespace std;
#include <vector>
#include <unordered_set>
#include <unordered_map>

class RandomizedSet {
public:
    unordered_set<int> RandomSet;
    vector<int> elements;
    unordered_map<int,int> IndexMap;
    RandomizedSet(): RandomSet() {
    }
    
    bool insert(int val) {
        if (RandomSet.find(val) != RandomSet.end()) return false;
        RandomSet.insert(val);
        elements.push_back(val);
        IndexMap[val] = elements.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if (RandomSet.find(val) == RandomSet.end()) return false;
        RandomSet.erase(val);

        int index = IndexMap[val];
        int lastIndex = elements.size() - 1;
        int lastElement = elements[lastIndex];

        int temp = elements[lastIndex];
        elements[lastIndex] = elements[index];
        elements[index] = temp;

        IndexMap[lastElement] = index;
        IndexMap[val] = lastIndex;

        elements.pop_back();
        IndexMap.erase(val);

        return true;
    }
    
    int getRandom() {
        int index = rand() % RandomSet.size();
        return elements[index];
    }
};