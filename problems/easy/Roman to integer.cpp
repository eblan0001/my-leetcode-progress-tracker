#include "../includes.h"
using namespace std;



class Solution {
    public:
        int romanToInt(string s) {
            
            std::map<char, int> roman_val = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
            };
            int result = 0;
            int size = s.size();
            for (size_t i = 0; i < size; i++)
            {
                if(i + 1 < size && roman_val[s[i]] < roman_val[s[i + 1]]) result -= roman_val[s[i]];
                else result += roman_val[s[i]];
            }
            return result;
        }
    };