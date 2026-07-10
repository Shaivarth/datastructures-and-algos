#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long first = LONG_MIN;
        long long second = LONG_MIN;
        long long third = LONG_MIN;

        for (int num : nums) {
            // duplicate skips.
            if (num == first || num == second || num == third) {
                continue;
            }
            // New largest number.
            if (num > first) {
                third = second;
                second = first;
                first = num;
            }
            // New second largest.
            else if (num > second) {
                third = second;
                second = num;
            }
            // New third largest.
            else if (num > third) {
                third = num;
            }
        }
        //this is when the third largest number does not exist.
        if (third == LONG_MIN) {
            return first;
        }
        return third;
    }
};

int main() {

    Solution s;

    vector<int> nums = {2, 2, 3, 1};

    cout << s.thirdMax(nums) << endl;

    return 0;
}