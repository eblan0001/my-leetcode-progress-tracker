#include "../includes.h"
using namespace std;
//solution
class Solution 
{
    public:
        int removeElement(vector<int>& nums, int val) 
        {
            int j = 0;
            for (size_t i = 0; i < nums.size(); i++)
            {
                if(nums[i] != val)
                {
                    nums[j] = nums[i];
                    j++;
                }
            }
            return j;
        }
};