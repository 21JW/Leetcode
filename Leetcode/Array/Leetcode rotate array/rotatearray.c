#include<stdio.h>

void rotate(int* nums, int numsSize, int k) {
    int i = 0;
    k = k % numsSize;
    int c = (k <= numsSize / 2 ? k : numsSize - k);
    int* a = (int*)malloc(c * 4);
    if (a == NULL)
        return(-1);
    if (k == 0)
    {
    }
    else if (k <= numsSize / 2)
    {
        for (i = 0;i < k;i++)
        {
            *(a + i) = nums[numsSize - k + i];
        }
        for (i = 0;i < numsSize - k;i++)
        {
            nums[numsSize - 1 - i] = nums[numsSize - 1 - k - i];
        }
        for (i = 0;i < k;i++)
        {
            nums[i] = *(a + i);
        }
    }
    else
    {
        for (i = 0;i < numsSize - k;i++)
        {
            *(a + i) = nums[i];
        }
        for (i = 0;i < k;i++)
        {
            nums[i] = nums[numsSize - k + i];
        }
        for (i = 0;i < numsSize - k;i++)
        {
            nums[k + i] = *(a + i);
        }
    }
    free(a);
}

int main()
{
    int b[] = { 1,2,3,4,5,6,7,8 };
    int* p = b;
    rotate(b, 8, 6);
    int i = 0;
    for (i = 0;i < 8;i++)
        printf("%d ", b[i]);
}
