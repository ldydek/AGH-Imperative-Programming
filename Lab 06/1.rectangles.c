#include <stdio.h>
#include <stdlib.h>


int max1(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min1(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}

int main()
{
    int n,sx=100000, bx=-100000, sy=100000, by=-100000;
    scanf("%d", &n);
    int tab[4*n];
    int tab1[2*n];
    for (int i=0; i<4*n; i++)
        scanf("%d", &tab[i]);
    for (int j=0; j<n; j++)
    {
        for (int i=0; i<4; i++)
        {
            if (i%2 == 0)
            {
                if (tab[4*j+i] < sx)
                    sx = tab[4*j+i];
                if (tab[4*j+i] > bx)
                    bx = tab[4*j+i];
            }
            else
            {
                if (tab[4*j+i] < sy)
                    sy = tab[4*j+i];
                if (tab[4*j+i] > by)
                    by = tab[4*j+i];
            }
        }
    }

    int ctr = 0;
    int fctr = 0;
    for (int i=sx; i<bx; i++)
    {
        for (int j=sy; j<by; j++)
        {
            ctr = 0;
            for (int x=0; x<n; x++)
            {
                if ((i >= min1(tab[4*x+0], tab[4*x+2]) && i <= max1(tab[4*x+0], tab[4*x+2])-1) && (j >= min1(tab[4*x+1], tab[4*x+3]) && j <= max1(tab[4*x+1], tab[4*x+3])-1))
                    ctr += 1;
                else
                    ctr += 0;
            }
            if (ctr % 2 == 1)
            {
                fctr += 1;
            }
        }
    }
    printf("%d", fctr);
}
