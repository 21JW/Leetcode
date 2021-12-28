#include<stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    int k = 1;
    if (numsSize == 0)
    {
        k = 0;
    }
    else if (numsSize == 1)
    {
    }
    else
    {
        int point = 0;
        while (point < numsSize - 1)
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
