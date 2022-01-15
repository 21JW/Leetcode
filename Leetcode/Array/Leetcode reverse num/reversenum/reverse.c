#include<stdio.h>
int main()
{
	int x = 123;
    int result = 0;
    while (x)
    {
        result = result * 10 +x%10;
        x = x / 10;
    }
    printf("%d", result);
	return 0;
}
