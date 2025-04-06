#include "../includes.h"
using namespace std;
//solution

class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            string temp;
            for (int x : digits) temp.append(to_string(x));
            long long temp1 = stoll(temp.c_str()) + 1;
            vector<int> result;
            result.clear();
            for(char i : to_string(temp1)) result.push_back(i - '0');  
            return result;
        }
    };