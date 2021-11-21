#include <stdio.h>

int main(void)
{
    int n,i,k,max1,max2,a=0,suma=0;
    scanf("%d", &n);
    int tab[n];
    scanf("%d", &k);
    for (i=0; i<n; i++)
    {
        scanf("%d", &tab[i]);
    }
    for (int j=0; j<n; j++)
    {
        max1 = 0;
        for (int i=0; i<n; i++)
        {
            if (tab[i] > max1)
            {
                max1 = tab[i];
                max2 = i;
            }
        }
        a++;
        tab[max2] = tab[max2]/2;
        if (a==k)
            break;
    }
    for (int i=0; i<n; i++)
    {
        suma += tab[i];
    }
    printf("%d", suma);
}
