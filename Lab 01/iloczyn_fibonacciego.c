#include <stdio.h>
#include <math.h>


int fib(int n)
{
    int c, k=0, a1=0, a2=1;
    while (k <= n)
    {
        k = a1 * a2;
        if (k==n)
            return 1;
        c = a1 + a2;
        a1 = a2;
        a2 = c;
    }
    return 0;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    if (fib(n) == 1)
        printf("YES");
    else
        printf("NO");
}
