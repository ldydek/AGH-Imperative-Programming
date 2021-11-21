#include <stdio.h>
#include <math.h>

int jednokwadratowa(int a)
{
    int suma;
    while(a!=1 && a!= 4)
    {
        suma = 0;
        while (a>0)
        {
            suma += pow(a%10,2);
            a /= 10;
        }
        a = suma;
    }
    return a;
}

int pierwsza(int a)
{
    int suma=0;
    if ((a==2) || (a==3))
        return 1;
    if ((a%2==0) || (a%3==0))
        return 0;
    for (int i=1; i<sqrt(a); i++)
    {
        if (a%i==0)
        {
            suma += a/i+i;
        }
    }
    suma -= a;
    if (suma==1)
        return 1;
    else
        return 0;
}

int koncowafunkcja()
{
    int a=0,l,u,k,m,y=-1;
    scanf("%d", &l);
    scanf("%d", &u);
    scanf("%d", &k);
    for (int i=l; i<=u; i++)
    {
        m++;
        if ((jednokwadratowa(i)==1) && (pierwsza(i)==1))
        {
            a++;
            if (a==k)
            {
                 printf("%d", i);
                 return i;
            }

        }
    }
    printf("-1");
    return y;
}

int main(void)
{
    koncowafunkcja();
}
