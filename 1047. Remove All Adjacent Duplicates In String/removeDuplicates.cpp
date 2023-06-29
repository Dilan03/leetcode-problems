#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

class Solution {
public:
  string removeDuplicates(string s) {
      int i = 0;

      while(i < s.size()) {
         if(s[i] != s[i+1]) 
            i++;
         else {
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            if(i > 0) 
               i--; 
         }
      }

      return s;
   }
};

int main() {
   Solution solution;

   string s = "abbaca";

   string newS = solution.removeDuplicates(s);
   

   cout << newS;
}