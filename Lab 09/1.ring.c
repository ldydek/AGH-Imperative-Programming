#include <stdio.h>
#include <math.h>
#define SIZE 50

int pierwsza(int n)
{
    if (n==2)
        return 1;
    else if (n==1)
        return 0;
    else if (n<=0)
        return 0;
    for (int i=2; i<sqrt(n)+1; i++)
    {
        if (n%i==0)
            return 0;
    }
    return 1;
}


int main(void)
{
    char tab[SIZE];
    int n=-1,o;
    char a='z';

    while(1)
    {
        n++;
        scanf("%c", &tab[n]);
        if (("%d", tab[n]) == 10)
            break;
        if (("%d", tab[n]) < ("%d", a))
        {
            a = tab[n];
            o = n;
        }
    }

    int xctr=0;
    for (int i=0; i<n; i++)
    {
        if (("%d", tab[i]) == ("%d", a))
            xctr++;
    }

    int aux_tab[xctr];
    xctr = -1;
    for (int i=0; i<n; i++)
    {
        if (("%d", tab[i]) == ("%d", a))
        {
            xctr++;
            aux_tab[xctr] = i;
        }
    }

    int ctr=0,curr=aux_tab[0];
    char tab2[n];
    int p, x, i;
    char tab3[n];
    tab2[0] = tab[aux_tab[0]];

    while (ctr < n)
    {
        ctr++;
        if (curr+2 < n)
        {
            tab2[ctr] = tab[curr+2];
            curr += 2;
        }
        else
        {
            tab2[ctr] = tab[curr+2-n];
            curr = curr+2-n;
        }
    }

    for (int j=0; j<=xctr; j++)
    {
        ctr = 0;
        curr = aux_tab[j];
        tab3[0] = tab[aux_tab[j]];
        p = 2;
        while (p<n)
        {
            if (pierwsza(p) == 1)
            {
                ctr = 0;
                curr = aux_tab[j];
                tab3[0] = tab[aux_tab[j]];
                while (ctr < n)
                {
                    ctr++;
                    if (curr + p < n)
                    {
                        tab3[ctr] = tab[curr+p];
                        curr += p;
                    }
                    else
                    {
                        tab3[ctr] = tab[curr+p-n];
                        curr = curr+p-n;
                    }
                }
                i = 0;
                x = 0;
                while (i<n)
                {
                    if (x==1)
                    {
                        tab2[i] = tab3[i];
                    }
                    else if (("%d", tab2[i]) < ("%d", tab3[i]))
                        break;
                    else if ((("%d", tab2[i]) > ("%d", tab3[i])) && (x==0))
                    {
                        x = 1;
                        i = -1;
                    }
                    i++;
                }
            }
        p++;
        }
    }

    for (int i=0; i<n; i++)
        printf("%c", tab2[i]);
}
