#include "../includes.h"
using namespace std;
//solutuion
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int result = 0;
            for(int& num : nums) result ^= num;
            return result;
        }
    };