#include <stdio.h>


int main(void)
{
    int n,q,ctr=0,aux_ctr=-1,temp=1,final_counter=0,a,b;
    scanf("%d", &n);
    scanf("%d", &q);
    int tab1[q*2];
    int tab2[n*(n-1)-2*q];

    for (int i=0; i<q*2; i++)
        scanf("%d", &tab1[i]);

    for (int x=1; x<=n; x++)
    {
        for (int y=x+1; y<=n; y++)
        {
            ctr = 0;
            for (int z=0; z<q; z++)
            {
                if ((tab1[z*2] != x) || (tab1[z*2+1] != y))
                    ctr++;
                else
                    break;
            }
            if (ctr == q)
            {
                aux_ctr++;
                tab2[aux_ctr] = x;
                aux_ctr++;
                tab2[aux_ctr] = y;
            }
        }
    }

    for (int xx=0; xx<q; xx++)
    {
        for (int x=0; x<q; x++)
        {
            if (tab1[2*x] == temp)
            {
                a = tab1[2*x+1];
                for (int y=x+1; y<q; y++)
                {
                    if (tab1[2*y] == temp)
                    {
                        b = tab1[2*y+1];
                        for (int z=0; z<q; z++)
                        {
                            if (((tab1[2*z]==a) && (tab1[2*z+1]==b)) || ((tab1[2*z]==b) && (tab1[2*z+1]==a)))
                            {
                                final_counter++;
                                break;
                            }
                        }
                    }
                }
            }
        }
        temp++;
    }
    temp = 1;
    for (int xx=0; xx<n*(n-1)/2-q; xx++)
    {
        for (int x=0; x<n*(n-1)/2-q; x++)
        {
            if (tab2[2*x] == temp)
            {
                a = tab2[2*x+1];
                for (int y=x+1; y<n*(n-1)/2-q; y++)
                {
                    if (tab2[2*y] == temp)
                    {
                        b = tab2[2*y+1];
                        for (int z=0; z<n*(n-1)/2-q; z++)
                        {
                            if (((tab2[2*z]==a) && (tab2[2*z+1]==b)) || ((tab2[2*z]==b) && (tab2[2*z+1]==a)))
                            {
                                final_counter++;
                                break;
                            }
                        }
                    }
                }
            }
        }
        temp++;
    }
    printf("%d", final_counter);
}
