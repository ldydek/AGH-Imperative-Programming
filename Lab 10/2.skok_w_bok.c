#include <stdio.h>

int main(void)
{

    int n;
    scanf("%d", &n);

    int p;
    long int m;
    long int T[n][2];


    for (int i=0; i<n; i++)
    {
        scanf("%d%ld", &T[i][0], &T[i][1]);
    }
    int biggest = T[n-1][0];

    int zakres = biggest*2+82;
    int zero = biggest+40+1;

    long int tab1[zakres];
    for (int i=0; i<zakres; i++)
    {
        tab1[i]=0;
    }
    for (int i=0; i<n; i++)
    {
        tab1[zero+T[i][0]]=T[i][1];
    }
    int pointer=biggest;
    while (pointer+zero>0)
    {
        if (tab1[zero+pointer-1]!=0)
        {
            tab1[zero+pointer-1]--;
            tab1[zero+pointer]--;
            tab1[zero+pointer+1]++;
            if (tab1[zero+pointer+2]!=0)
                pointer+=2;
            else
                pointer++;
        }

        if (tab1[zero+pointer-1]==0)
        {
            if (tab1[zero+pointer+1]==0 && tab1[zero+pointer]==1)
            {
                pointer--;
                while (tab1[zero+pointer]==0 && pointer+zero>0) pointer--;
            }

            if (tab1[zero+pointer]>2)
            {
                tab1[zero+pointer]-=3;
                tab1[zero+pointer-2]+=1;
                tab1[zero+pointer+2]+=1;
                if (tab1[zero+pointer+3]!=0) pointer+=3;
                else pointer+=2;
            }
            else if (tab1[zero+pointer]>1)
            {
                tab1[zero+pointer]-=2;
                tab1[zero+pointer+1]++;
                tab1[zero+pointer-2]++;
                if (tab1[zero+pointer+2]!=0) pointer+=2;
                else pointer++;
            }
        }
    }

    for (int i=0; i<zakres; i++)
    {
        if (tab1[i]==1) printf("%d ", i-zero);
    }
    return 0;
}
