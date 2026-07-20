#include <stdio.h>
long long powerlogiterative(long long base, int expo)
{
    long long result = 1;
    while (expo > 0)
    {
        if (expo % 2 != 0)
        {
            result = result * base;
        }
        base = base * base;
        expo = expo / 2;
    }
    return result;
}
int main()
{
    long long base;
    printf("Enter base :");
    scanf("%lld", &base);
    int expo;
    printf("Enter exponent :");
    scanf("%d", &expo);
    printf("The power is %lld\n", powerlogiterative(base, expo));
    return 0;
}
