#include "../includes.h"
using namespace std;
//solution

using namespace std;
class Solution {
    public:
        bool isPalindrome(int x)
        {
            int length = to_string(x).length();
            string k = to_string(x);
            for(size_t i = 0; i < length; i++)
            {
                if(k[i] != k[k.length() - i - 1]) return false;
            }
            return true;
        }
    };