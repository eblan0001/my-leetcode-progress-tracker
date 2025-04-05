#include "../includes.h"
using namespace std;
//solution
class Solution {
    public:
        bool isPalindrome(string s) {
            s.erase(remove_if(s.begin(), s.end(), [](char c){return !isalnum(c);}), s.end());
            for(char& c : s) { c = tolower(c); };
            int left = 0; int right = s.length() - 1;
            while(left < right)
            {
                if(s[left] != s[right]) { return false; };
                right--; left++;
            }
            return true;

        }
    };