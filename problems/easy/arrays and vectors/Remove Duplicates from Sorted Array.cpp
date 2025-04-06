#include "../includes.h"
using namespace std;
//solution
class Solution {
    public:
        int removeDuplicates(std::vector<int>& nums) {
            if (nums.empty()) return 0;
    
            int k = 1;
            for (size_t i = 1; i < nums.size(); i++) {
                if (nums[i] != nums[i - 1]) {
                    nums[k] = nums[i];
                    k++;
                }
            }
            return k;
        }
    };