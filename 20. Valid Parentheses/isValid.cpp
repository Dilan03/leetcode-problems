#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

class Solution {
public:
   bool isValid(string s) {
      string ans = "";
      for (int i = 0; i < s.size(); i++) {

         if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
            ans.push_back(s[i]);
         } else if(ans.back() == '(' && s[i] == ')') {
            ans.pop_back();
         } else if (ans.back() == '[' && s[i] == ']'){
            ans.pop_back();
         } else if (ans.back() == '{' && s[i] == '}'){
            ans.pop_back();
         } else {
            return false;
         }
      }

      if(ans.size() == 0) 
         return true;
   }
};

int main() {
   Solution solution;

   string s = "(){}";

   cout << solution.isValid(s);
   return false;
   
}