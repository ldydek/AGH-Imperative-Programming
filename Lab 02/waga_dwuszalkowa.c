#include <stdio.h>

int waga(int tab[], int n, int w, int i)
{
    if (w==0)
        return 1;
    else if (i==n)
        return 0;
    else
        return waga(tab, n, w-tab[i], i+1) || waga(tab, n, w, i+1) || waga(tab, n, w+tab[i], i+1);

}

int main(void)
{
    int n,w,b,suma=0;
    scanf("%d", &n);
    scanf("%d", &w);
    int tab[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &tab[i]);
        suma += tab[i];
    }
    if (suma < w)
        printf("NO");
    else
    {
        if (waga(tab, n, w, 0) == 1)
            printf("YES");
        else
            printf("NO");
    }
}
