#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for (int i = digits.size() - 1; i >= 0; i--) {

            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        vector<int> ans(digits.size() + 1, 0);
        ans[0] = 1;

        return ans;
    }
};

int main() {

    vector<int> digits = { 9,9,9,9 };

    Solution s;

    vector<int> result = s.plusOne(digits);

    cout << "Output: ";

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}