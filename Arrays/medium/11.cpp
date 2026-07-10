#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;
        while(left < right)
        {
            int width = right - left;
            int currArea = width * min(height[left], height[right]);
            maxWater = max(maxWater, currArea);
            if(height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxWater;
    }
};
int main()
{
    vector<int> height = {7,8,6,2,5,1,8,7,10,10};
    Solution obj;
    cout << obj.maxArea(height);
    return 0;
}