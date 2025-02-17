class Solution {
public:
    long long smallestNumber(long long num) {
        if (num == 0) return 0; // Edge case

        vector<long long> v;
        
        bool isNegative = (num < 0);
        num = abs(num);

        while (num > 0) {
            v.push_back(num % 10);
            num /= 10;
        }

        if (isNegative) {
            // Sort in descending order for the smallest negative number
            sort(v.begin(), v.end(), greater<long long>());
        } else {
            // Sort in ascending order for the smallest positive number
            sort(v.begin(), v.end());

            // Handle leading zeros: Move the first non-zero digit to the front
            if (v[0] == 0) {
                for (int i = 1; i < v.size(); i++) {
                    if (v[i] != 0) {
                        swap(v[0], v[i]);
                        break;
                    }
                }
            }
        }

        long long actnum = 0;
        for (long long i : v) {
            actnum = actnum * 10 + i;
        }

        return isNegative ? -actnum : actnum;
    }
};