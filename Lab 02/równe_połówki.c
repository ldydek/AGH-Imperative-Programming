#include <stdio.h>

int main(void)
{
    int n, i, suma1=0, suma2=0,k=0,x=0;
    scanf("%d", &n);
    int tab[n];
    for (i=0; i<n; i++)
    {
         scanf("%d", &tab[i]);
         suma1 += tab[i];
         if (tab[i]!=0)
         {
            k++;
            x = i;
         }
    }
    if (suma1==suma2)
    {
        printf("0");
    }
    else if(k==1)
    {
        printf("%d", x);
    }
    else
    {
        suma1 -= tab[n-1]+tab[n-2];
        suma2 += tab[n-1];
        for (i=n-3; i>=0; i--)
        {
            if (suma1==suma2)
            {
                printf("%d", i+1);
                break;
            }
            suma1 -= tab[i];
            suma2 += tab[i+1];
        }
    }
}
