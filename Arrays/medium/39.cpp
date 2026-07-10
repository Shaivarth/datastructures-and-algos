#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int>& candidates, int target, vector<int>& curr, int index){
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        if (target < 0) {
            return;
        }
        for (int i = index; i < candidates.size(); i++) {
            curr.push_back(candidates[i]); // Choose
            backtrack(candidates, target - candidates[i], curr,i); 
            curr.pop_back(); 
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates,int target){
        vector<int> curr;
        backtrack(candidates, target, curr, 0);
        return ans;
    }
};
int main() {
    Solution s;
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = s.combinationSum(candidates, target);
    for (auto &comb : result) {
        cout << "[ ";
        for (int x : comb) {
            cout << x << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}