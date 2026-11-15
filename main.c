#include <stdio.h>

int main(void)
{
    int n;
    long total = 0;
    
    scanf("%d", &n);

    if (n < 0)
    {
        printf("NG");
        return 0;
    }
    for (long number = 2; number <= n; number += 2)
    {
        total += number;
    }

    printf("%ld", total);
    return 0;
}