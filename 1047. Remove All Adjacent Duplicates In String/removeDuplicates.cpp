#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

class Solution {
public:
   string removeDuplicates(string s) {
      int i = 0, j = 1;

      while(j < s.size()) {
         if(s[i] != s[j]) {
            i++;
            j++;
         } else {
            s.erase(s.begin() + j);
            s.erase(s.begin() + i);
            if(i > 0) {
               i--; j--;
            }
            
         }
      }

      return s;
   }
};

int main() {
   Solution solution;

   string s = "azxxzy";

   string newS = solution.removeDuplicates(s);

   cout << newS;
}