class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> jewelMap;
        int count = 0;

        
        for (char j : jewels) {
            jewelMap[j] = 1;  
        }

        
        for (char s : stones) {
            if (jewelMap.find(s) != jewelMap.end()) {
                count++;
            }
        }

        return count;
    }
};