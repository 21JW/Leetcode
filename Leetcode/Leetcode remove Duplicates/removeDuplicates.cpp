#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        if (nums.size() == 0)
        {
            k = 0;
        }
        else if (nums.size() == 1)
        {
            k = 1;
        }
        else
        {
            int point = 0;
            while (point < nums.size() - 1)
            {
                if (nums[point] == nums[point + 1])
                {
                    point++;
                }
                else
                {
                    nums[k] = nums[point + 1];
                    point++;
                    k++;
                }
            }
        }
        return k;
    }
};