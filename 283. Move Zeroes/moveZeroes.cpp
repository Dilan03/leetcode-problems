#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

class Solution {
public:
   void moveZeroes(vector<int> &nums) {
      int i = 0, j = 1;
      while( i != j && j < nums.size() && nums.size() > 1) {
         if(nums[i] != 0) {
            i++;j++;
         } else {
            if(nums[j] == 0) {
               j++;
            } else {
               swap(nums[i++],nums[j++]);
            }
         }
      }
   }
};

int main() {
   Solution solution;

   vector<int> nums = {0, 1, 0, 3, 12};
   vector<int> expectedNums = {1, 3, 12, 0, 0};

   solution.moveZeroes(nums);

   for (int i = 0; i < nums.size(); i++) 
      cout << nums[i];
}