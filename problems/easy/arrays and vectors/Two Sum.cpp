#include "../includes.h"
using namespace std;
// solution
class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target) {
            for (size_t i = 0; i < nums.size(); i++)
            {
                for (size_t j = i + 1; j < nums.size(); j++)
                {
                    if (nums[i] + nums[j] == target) 
                    {
                        return {static_cast<int>(i), static_cast<int>(j)};
                    }
                }
            }
            return {};
        }
    };