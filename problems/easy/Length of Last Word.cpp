#include "../includes.h"
using namespace std;
// solution
class Solution {
    public:
        int lengthOfLastWord(string s) {
            int end = s.length() - 1, counter = 0;
            while(s[end] == ' ') end--;
            while(isalnum(s[end]))
            {
                counter++;
                end--;
            }
        }
    };