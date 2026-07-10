#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n);
    // storing left side products
    answer[0] = 1;
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }
    // multiplying with right side products
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * rightProduct;
        rightProduct = rightProduct * nums[i];
    }
    return answer;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> ans = productExceptSelf(nums);
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}