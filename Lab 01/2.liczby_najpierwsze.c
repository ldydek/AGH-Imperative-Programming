#include <stdio.h>
#include <math.h>


int pierwsza(int a)
{
    int suma = 0;
    if ((a==0) || (a==1))
        return 0;
    if (a==2)
        return 1;
    for (int i=1; i<sqrt(a)+1; i++)
    {
        if (a%i == 0)
            suma += i;
    }
    if (suma==1)
        return 1;
    else
        return 0;
}

int niemalejace_cyfry(int a)
{
    int k=9;
    while (a>0)
    {
        if (a%10 > k)
        {
            return 0;
        }
        k = a%10;
        a /= 10;
    }
    return 1;
}

int main(void)
{
    int a,b,c,n;
    scanf("%d", &n);
    for (int i=1; i<n; i++)
    {
        if((niemalejace_cyfry(i)==1) && (pierwsza(i)==1))
           printf("%d\n", i);
    }
}
