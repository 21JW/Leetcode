#include<iostream>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i = 0;
        k = k % nums.size();
        int c = (k <= nums.size() / 2 ? k : nums.size() - k);
        int* a;
        a = new int[c * 4];
        if (a == NULL)
            exit(1);
        if (k == 0)
        {
        }
        else if (k <= nums.size() / 2)
        {
            for (i = 0;i < k;i++)
            {
                *(a + i) = nums[nums.size() - k + i];
            }
            for (i = 0;i < nums.size() - k;i++)
            {
                nums[nums.size() - 1 - i] = nums[nums.size() - 1 - k - i];
            }
            for (i = 0;i < k;i++)
            {
                nums[i] = *(a + i);
            }
        }
        else
        {
            for (i = 0;i < nums.size() - k;i++)
            {
                *(a + i) = nums[i];
            }
            for (i = 0;i < k;i++)
            {
                nums[i] = nums[nums.size() - k + i];
            }
            for (i = 0;i < nums.size() - k;i++)
            {
                nums[k + i] = *(a + i);
            }
        }
    }
};