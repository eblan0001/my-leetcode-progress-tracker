#include "../includes.h"
using namespace std;
// solution
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            for (size_t i = 0; i + 1 < nums.size(); i++)
            {
                if(nums[i] == nums[i + 1]) return true; continue;
            }
            return false;
        }
    };
