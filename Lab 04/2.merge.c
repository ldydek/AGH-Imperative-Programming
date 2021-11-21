#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
    return (*(int *) a - *(int *) b);
}

int main() {

    int N,i,c;

    scanf("%d", &N);

    int tab1[N*N], tab2[N*N];

    for (i=0;i<N*N;++i)
    {
        scanf("%d", &tab1[i]);
    }

    qsort(tab1, N * N, sizeof(int), cmpfunc);

    c=0;

    for(i=0;i<N*N-1;i++)
    {
        if(tab1[i]!=tab1[i+1])
        {
            tab2[c]=tab1[i];
            c++;
        }
    }
    tab2[c]=tab1[i];

    for (i=0;i<=c;i++)
    {
        printf("%d ", tab2[i]);
    }
}
