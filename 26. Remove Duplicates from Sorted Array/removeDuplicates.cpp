#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

class Solution {
public:
   int removeDuplicates(vector<int> &nums) {
      int last;
      for (int i = 0; i < nums.size(); i++) {
         if(nums[i] == nums[i + 1] && nums[i] != last) {
            if(nums[i] == nums[i+1]) {
               last = nums[i];
               if(last == nums[i+1]) {
               last = nums[i];
               }else {
                  nums.erase(nums.begin() + i);
               }
            } else {
               nums.erase(nums.begin() + i);
            }
         } else {
            nums.erase(nums.begin() + i);
         }
      } 

      return nums.size();
   }
};

int main() {
   Solution solution;
   int k;
   vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
   vector<int> expectedNums = {0, 1, 2, 3, 4};

   k = solution.removeDuplicates(nums);

   //assert (k == expectedNums.size());
   for (int i = 0; i < k; i++) {

      cout << nums[i];
      //assert (nums[i] == expectedNums[i]);
   }

   cout << "";
}