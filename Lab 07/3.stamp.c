#include <stdio.h>


int main(void)
{
    int n,k,l;
    scanf("%d", &n);
    scanf("%d", &k);
    scanf("%d", &l);
    int tab1[n][n];
    int tab2[k][l];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &tab1[i][j]);
        }
    }
    for (int i=0; i<k; i++)
    {
        for (int j=0; j<l; j++)
        {
            scanf("%d", &tab2[i][j]);
        }
    }
    int suma,final_sum=0;
    for (int x=0; x<=n-k; x++)
    {
        for (int y=0; y<=n-l; y++)
        {
            suma = 0;
            for (int i=x; i<k+x; i++)
            {
                for (int j=y; j<l+y; j++)
                {
                    if (tab2[i-x][j-y] == 1)
                        suma += tab1[i][j];
                }
            }
            if (suma > final_sum)
                final_sum = suma;
        }
    }
    printf("%d", final_sum);
}
