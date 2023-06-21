#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
      int maxArea = 0, i = 0, j = height.size() -1, tempArea = 0;

      while( i < j ) {
         if(height[i] < height[j]) {
            tempArea = height[i]*(j - i);
            i++;

         } else {
            tempArea = height[j]*(j - i);
            j--;
         }

         if(maxArea < tempArea)
            maxArea = tempArea;
      }

      return maxArea;
   }
};

int main() {
   Solution solution;

   vector<int> height = {1, 1};

   cout << solution.maxArea(height);
}