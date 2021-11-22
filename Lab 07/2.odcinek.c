#include <stdio.h>


int main(void)
{
    int n,k,a,b;
    scanf("%d", &n);
    scanf("%d", &k);
    int tab[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &tab[i][j]);
        }
    }
    int suma,final_sum=0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            suma = 0;
            a = i;
            b = j;
            for (int x=0; x<k; x++)
            {
                suma += tab[a][b];
                a++;
                if (a == n)
                    a = 0;
            }
            if (suma > final_sum)
                final_sum = suma;
            suma = 0;
            a = i;
            b = j;
            for (int x=0; x<k; x++)
            {
                suma += tab[a][b];
                a--;
                if (a == -1)
                    a = n-1;
            }
            if (suma > final_sum)
                final_sum = suma;
            suma = 0;
            a = i;
            b = j;
            for (int x=0; x<k; x++)
            {
                suma += tab[a][b];
                b++;
                if (b == n)
                    b = 0;
            }
              if (suma > final_sum)
                final_sum = suma;
            suma = 0;
            a = i;
            b = j;
            for (int x=0; x<k; x++)
            {
                suma += tab[a][b];
                b--;
                if (b == -1)
                    b = n-1;
            }
              if (suma > final_sum)
                final_sum = suma;
            suma = 0;
            a = i;
            b = j;
            for (int x=0; x<k; x++)
            {
                suma += tab[a][b];
                a++;
                b++;
                if (a == n)
                    a = 0;
                if (b == n)
                    b = 0;
            }
              if (suma > final_sum)
                final_sum = suma;
            suma = 0;
            a = i;
            b = j;
            for (int x=0; x<k; x++)
            {
                suma += tab[a][b];
                a--;
                b--;
                if (a == -1)
                    a = n-1;
                if (b == -1)
                    b = n-1;
            }
              if (suma > final_sum)
                final_sum = suma;
            suma = 0;
            a = i;
            b = j;
            for (int x=0; x<k; x++)
            {
                suma += tab[a][b];
                a++;
                b--;
                if (a == n)
                    a = 0;
                if (b == -1)
                    b = n-1;
            }
            if (suma > final_sum)
                final_sum = suma;
            suma = 0;
            a = i;
            b = j;
            for (int x=0; x<k; x++)
            {
                suma += tab[a][b];
                a--;
                b++;
                if (a == -1)
                    a = n-1;
                if (b == n)
                    b = 0;
            }
        }
    }
    printf("%d", final_sum);
}
