#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) { // kind of two pointer approach
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) // found 
            return mid;
        if (nums[left] <= nums[mid]){ // left half is sorted
            if (target >= nums[left] && target < nums[mid]) { // target in left half
                right = mid - 1;
            }
            else { // target in right half
                left = mid + 1;
            }
        }
        else { // right half is sorted
            if (target > nums[mid] && target <= nums[right]) { // target in right half
                left = mid + 1;
            }
            else { // target in left half
                right = mid - 1;
            }
        }
    }
    return -1;
}
int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 1;
    int index = search(nums, target);
    if (index != -1)
        cout << "target found at index: " << index << endl;
    else
        cout << "target not found" << endl;
    return 0;
}