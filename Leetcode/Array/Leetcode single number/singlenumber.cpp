#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i = 1;
        int k = nums[0];
        if (nums.size() == 1)
        {
        }
        else
        {
            for (i = 1;i <= nums.size() - 1;i++)
            {
                k = nums[i] ^ k;
            }
        }
        return k;
    }
};