class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;

        vector<int> v;

        for (int c : nums1) {
            mp1[c]++;
        }
        for (int c : nums2) {
            mp2[c]++;
        }

        for (auto it : mp1) {
            if (mp2.find(it.first) != mp2.end()) {
                if (it.second >= mp2[it.first]) {
                    for (int i = 0; i < mp2[it.first]; i++) {
                        v.push_back(it.first);
                    }
                } else if (it.second < mp2[it.first]) {
                    for (int i = 0; i < it.second; i++) {
                        v.push_back(it.first);
                    }
                }
            }
        }

        return v;
    }
};