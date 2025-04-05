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

    /* 2 lines solution
    string cleaned = accumulate(s.begin(), s.end(), string(), [](string res, char c){if(isalnum(c)) res.push_back(c); return res;});
    return equal(cleaned.begin(), cleaned.begin() + cleaned.size()/2, cleaned.rbegin());
    */