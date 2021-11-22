#include <stdio.h>

unsigned long long int result(long long int n)
{
    if (n == 0)
        return 0;
    if (n % 2 == 0)
    {
        return (n / 2)*(n / 2) + result(n / 2);
    }
    else
    {
        return (n + 1) / 2*(n + 1) / 2 + result(n / 2);
    }
}
int main()
{
    unsigned long long int n;
    scanf("%lld", &n);
    printf("%lld", result(n));
    return 0;
}
