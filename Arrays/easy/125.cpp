#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            // Skiping non-alphanumeric characters 
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            // Converting uppercase to lowercase and comparing
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    string s = "A man, a plan, a canal: Panama";
    Solution obj;
    bool result = obj.isPalindrome(s);
    cout << boolalpha << result;
    return 0;
}