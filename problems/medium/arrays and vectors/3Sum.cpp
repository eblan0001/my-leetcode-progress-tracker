#include "../../includes.h"

class Solution 
{
    public:
        std::vector<std::vector<int>> threeSum(std::vector<int>& nums) 
        {
            std::vector<std::vector<int>>res;
            int left = 1, right = nums.size() - 1;
            std::sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size(); i++)
            {
                if(nums[i] + nums[left] + nums[right] == 0) res.push_back({nums[i], nums[left], nums[right]});
                if(nums[i] + nums[left] + nums[right] < 0) left++;
                if(nums[i] + nums[left] + nums[right] > 0) right--;
            }
            return res;
            
        }
};