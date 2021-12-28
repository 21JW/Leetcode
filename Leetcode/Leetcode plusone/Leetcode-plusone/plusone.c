#include<stdio.h>

int main()
{
    int a[] = { 1,2,3 };
    int size = sizeof(a) / sizeof(a[0]);
    int b[5] = { 0 };
    plusone(a, size, b);
    int i = 0;
    for (i = 0;i <= size - 1;i++)
    {
        printf("%d ", b[i]);
    }
}

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int i = 0;
    if (digits[digitsSize - 1] != 9)
    {
        if (returnSize == NULL)
        {
            return 0;
        }
        returnSize[digitsSize - 1] = digits[digitsSize - 1] + 1;
        for (i = 0;i <= digitsSize - 2;i++)
        {
            returnSize[i] = digits[i];
        }
    }
}