#include <stdio.h>
#include <math.h>


int main(void)
{
    int n,k,q=1,x;
    scanf("%d", &n);
    scanf("%d", &k);
    int tab[n];
    for (int i=0; i<n; i++)
    {
        tab[i] = 0;
    }
    if (k>(1/sqrt(5))*pow(((1+sqrt(5))/2),n+2)+1)
        printf("-1");
    else if (k==1)
    {
        for (int i=0; i<n; i++)
            printf("%d", tab[i]);
    }
    else
    {
        while (1)
        {
            x=n-1;
            tab[x] += 1;
            while (tab[x] == 2)
            {
                tab[x] = 0;
                tab[x-1]++;
                x--;
            }
            q++;
            for (int i=0; i<n-1; i++)
            {
                if ((tab[i] == 1) && (tab[i+1] == 1))
                {
                    q--;
                    break;
                }
            }
            if (q == k)
            {
                for (int i=0; i<n; i++)
                {
                    printf("%d", tab[i]);
                }
                break;
            }
        }
    }
}
