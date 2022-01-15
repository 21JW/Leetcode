#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        if (nums.size() == 1 || nums.size() == 0)
        {
        }
        else if (nums.size() > 1)
        {
            int i;
            int count = 0;
            for (i = 0;i <= nums.size() - 1;i++)
            {
                if (nums[i] == 0)
                {
                    count++;
                }
                else if (nums[i] != 0)
                {
                    nums[i - count] = nums[i];
                }
            }
            i = 0;
            while (count)
            {
                nums[nums.size() - 1 - i] = 0;
                i++;
                count--;
            }
        }
    }
};