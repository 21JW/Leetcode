#include<stdio.h>

int singleNumber(int* nums, int numsSize) {
    int i = 1;
    int k = nums[0];
    if (numsSize == 1)
    {
    }
    else
    {
        for (i = 1;i <= numsSize - 1;i++)
        {
            k = nums[i] ^ k;
        }
    }
    return k;
}