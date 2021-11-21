#include <stdio.h>

int main(void)
{
    int n,k,x=0;
    scanf("%d", &n);
    scanf("%d", &k);
    int tab[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &tab[i]);
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if ((tab[j]-k <= tab[i]) && (tab[j]+k >= tab[i]) && (i!=j) && (tab[i]!=tab[j]))
            {
                x++;
                break;
            }
        }
    }
    printf("%d", x);
}
