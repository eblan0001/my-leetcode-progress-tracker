#include "../includes.h"
using namespace std;
//solution
class Solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
            vector<int>res;
            int temp = 0;
            for(auto num : nums)
            {
                temp+=num;
                res.push_back(temp);
            }
            return res;
        }
    };