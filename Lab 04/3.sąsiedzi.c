#include <stdio.h>


int matrix_sum(int n, int x, int y, int tab[], int r)
{
    int suma = 0;
    for (int i=y-r; i<=y+r; i++)
    {
        if ((i >= 0) && (i <= n-1))
        {
            for (int j=x-r; j<=x+r; j++)
            {
                if ((j >= 0) && (j <= n-1))
                {
                    suma += tab[i*n+j];
                }
            }
        }
    }
    return suma;
}


int main(void)
{
    int n,b,r,c=0;
    scanf("%d", &n);
    scanf("%d", &r);
    int tab[n][n];
    int tab2[n*n];
    int tab3[n*n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &tab[i][j]);
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            tab2[c] = tab[i][j];
            c++;
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
             tab3[i] = matrix_sum(n, j, i, tab2, r);
             printf("%d ", tab3[i]);
        }
        printf("\n");
    }
}
