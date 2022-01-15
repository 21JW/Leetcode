#include<stdio.h>
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    int capacity = 0;
    capacity = nums1Size < nums2Size ? nums1Size : nums2Size;
    int* ptr = (int*)malloc(capacity * sizeof(int));
    if (ptr == NULL)
    {
        printf("Error:Not Enough space");
        return;
    }
    else
    {
        int i = 0;
        int j = 0;
        int retSize = 0;
        for (i = 0;i < nums1Size;i++)
            for (j = 0;j < nums2Size;j++)
            {
                if (nums1[i] == nums2[j])
                {
                    ptr[retSize] = nums1[i];
                    retSize++;
                    nums2[j] = -1;
                    break;
                }
            }
        *returnSize = retSize;
        return ptr;
    }
}