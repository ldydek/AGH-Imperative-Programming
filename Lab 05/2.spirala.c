#include <stdio.h>

int main(void)
{
    int n,i,c=1;
    scanf("%d", &n);
    int a=0, b=n;
    int tab[n][n];
    while (a<b)
    {
        for (i=a; i<b-1; i++)
        {
            tab[a][i] = c;
            c++;
        }
        for (i=a; i<b-1; i++)
        {
            tab[i][b-1] = c;
            c++;
        }
        for (i=b-1; i>a; i--)
        {
            tab[b-1][i] = c;
            c++;
        }
        for (i=b-1; i>a; i--)
        {
            tab[i][a] = c;
            c++;
        }
        a++;
        b--;
    }
    if (n%2 != 0)
        tab[(n-1)/2][(n-1)/2] = n*n;
    for (int x=0; x<n; x++)
    {
        for (int y=0; y<n; y++)
        {
            printf("%d  ", tab[x][y]);
        }
        printf("\n");
    }
}
