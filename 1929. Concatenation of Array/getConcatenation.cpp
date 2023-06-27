#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

class Solution {
public:
   vector<int> getConcatenation(vector<int>& nums) {
      vector<int> ans = nums;

      for (int i = 0; i < nums.size(); i++) {
         ans.insert(ans.begin() + i + nums.size(), nums[i]);
      }
      
      return ans;
   }
};

int main() {
   Solution solution;

   vector<int> nums = {1, 3, 2, 1};

   vector<int> ans = solution.getConcatenation(nums);

   for (int i = 0; i < ans.size(); i++)
      cout << ans[i];
}