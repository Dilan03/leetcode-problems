#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

class Solution {
public:
   int removeDuplicates(vector<int> &nums) {
      int cont = 0;

      for (int i = 1; i <= nums.size(); i++) {
         if(nums[cont] != nums[i]) {
            cont++;
            nums[cont] = nums[i];
         } 
      }
      
      return cont;
   }
};

int main() {
   Solution solution;
   int k;
   vector<int> nums = {1, 1, 2};
   vector<int> expectedNums = {0, 1, 2, 3, 4};

   k = solution.removeDuplicates(nums);

   //assert (k == expectedNums.size());
   for (int i = 0; i < k; i++) {

      cout << nums[i];
      //assert (nums[i] == expectedNums[i]);
   }

   cout << "";
}