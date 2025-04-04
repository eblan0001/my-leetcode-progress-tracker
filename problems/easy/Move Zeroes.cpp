#include "../includes.h"
using namespace std;
//solution 
class Solution 
{
    public:
        void moveZeroes(vector<int>& nums) 
        {
            int j = 0;
            for (size_t i = 0; i < nums.size(); i++)
            {
                if(nums[i] != 0)
                {
                    nums[j] = nums[i];
                    j++;
                }
            }
            for(size_t i = j; i < nums.size(); i++)
            {
                nums[i] = 0;
            }
        }
};
