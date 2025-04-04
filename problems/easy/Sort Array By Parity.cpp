#include "../includes.h"
using namespace std;
// solution
class Solution {
    public:
        vector<int> sortArrayByParity(vector<int>& nums) {
            stable_partition(nums.begin(), nums.end(), [&](int x){return x % 2 == 0;});
            return nums;
        }
    };