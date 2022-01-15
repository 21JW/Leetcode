#include<stdio.h>
int main()
{
    int nums[] = { 0,0,1,2,5,6,7,8 };
    int numsSize = sizeof(nums) / sizeof(int);
    int i;
    if (numsSize == 0 || numsSize == 1)
    {
    }
    else if (numsSize > 1)
    {
        int count = 0;
        if (nums[0] == 0)
        {
            count++;
        }
        for (i = 1;i <= numsSize - 1;i++)
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
            nums[numsSize - 1 - i] = 0;
            i++;
            count--;
        }
    }
    for (i = 0;i <= numsSize - 1;i++)
    {
        printf("%d ", nums[i]);
    }
}
