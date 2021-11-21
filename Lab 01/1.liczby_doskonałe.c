#include <stdio.h>
#include <math.h>

int perfect_number(int a)
{
    int suma = 0;
    for (int i=1; i<sqrt(a); i++)
    {
        if (a%i == 0)
        {
            suma += i+a/i;
        }
    }
    suma -= a;
    if (suma == a)
        return 1;
    else
        return 0;
}

int main(void)
{
    int m,n,k=0;
    scanf("%d", &m);
    scanf("%d", &n);
    for (int i=m; i<=n; i++)
    {
         if (perfect_number(i) == 1)
            k++;
    }
    printf("%d\n" ,k);
    for (int i=m; i<=n; i++)
    {
         if (perfect_number(i) == 1)
            printf("%d ", i);
    }
}
