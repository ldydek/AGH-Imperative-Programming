#include <stdio.h>


void binary(int a, int aux_tab[][30], int i)
{
    for (int j=29; j>=0; j--)
    {
        aux_tab[i][j] = a%2;
        a /= 2;
    }
}

int main(void)
{
    int n, g, ctr=30, final_ctr=30;
    scanf("%d%d", &n, &g);
    int tab[n];
    int aux_tab[n+1][30];

    for (int i=0; i<n; i++)
    {
        scanf("%d", &tab[i]);
        binary(tab[i], aux_tab, i);
    }
    binary(g, aux_tab, n);

    int boole;
    for (int i=29; i>=0; i--)
    {
        if (aux_tab[n][i] == 1)
        {
            ctr = 0;
            for (int j=n-1; j>=0; j--)
            {
                if (aux_tab[j][i] == 1)
                {
                    boole = 0;
                    for (int k=29; k>=0; k--)
                    {
                        if (aux_tab[n][k] < aux_tab[j][k])
                        {
                            boole = 1;
                            break;
                        }
                    }
                    if (boole == 0)
                        ctr++;
                }
            }
        }
        if (final_ctr > ctr)
            final_ctr = ctr;
    }
    printf("%d", final_ctr);
}
