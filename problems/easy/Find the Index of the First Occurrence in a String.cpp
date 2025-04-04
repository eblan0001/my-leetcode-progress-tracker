#include "../includes.h"
using namespace std;
// solution
class Solution {
    public:
        int strStr(string haystack, string needle) {
                size_t n_index = haystack.find(needle);
                return n_index;
        }
    };