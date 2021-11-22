#include <stdio.h>
#include <math.h>
#define SIZE 50

int main(void)
{
    char tab[SIZE];
    char tab2[SIZE];
    for (int i=0; i<SIZE; i++)
        tab2[i] = '0';
    int i=0,m=0,c,p,ctr=0,r,d;
    while(1)
    {
        scanf("%c", &tab[i]);
        c = ("%d", tab[i]);
        if (c > m)
        {
            m = c;
            p = i;
        }
        if ("%d", tab[i] == 10)
        {
            break;
        }
        i++;
    }
    tab2[0] = ("%c", m);
    while (p<i-1)
    {
        m = 0;
        c = 0;
        r = 0;
        for (int j=p+1; j<i; j++)
        {
            c = ("%d", tab[j]);
            d = ("%c", tab[j]);
            if (c > m)
            {
                m = c;
                r = j;
            }
        }
        p = r;
        ctr++;
        tab2[ctr] = ("%c", tab[r]);
    }
    for (int i=0; i<SIZE; i++)
    {
        if (tab2[i] == '0')
            break;
        printf("%c", tab2[i]);
    }
}
