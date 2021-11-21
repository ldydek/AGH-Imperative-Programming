#include <stdio.h>
#include <string.h>


void fun(int capacity, int *w) {
    capacity--;
    w[capacity]++;
    while (w[capacity] >= 10) {
        w[capacity] = 0;
        w[capacity-1]++;
        capacity--;
    }
}


int divide(int capacity, int g, int *y) {
    int temp, c = 0;
    for (int a=0; a<capacity; a++)
    {
        temp = (y[a] + c * 10) % 2;
        y[a] = (y[a] + c * 10) / 2;
        c = temp;
    }
    if (c && g)
    {
        fun(capacity, y);
    }
    if (c !=0 )
     return 1;
    return 0;
}


void bank_f(int *q, int *bank, int capacity, int u)
{
    for (int a = 0; a < 100; a++)
    {
        bank[a] = divide(capacity, u, q);
        u = !u;
    }
}


void wypisz(int *t, int *bank, int capacity)
{
    int k=0,j=0;
    for (int a=0; a<capacity; a++)
    {
        if (t[a] != 0)
        {
            printf("NO");
            k = 1;
        }
    }

    if (k==0)
    {
        for (j=0; j<100; j++)
        {
            if (bank[j] != 0)
            {
                printf("%i ", j);
            }
        }
    }
}


int main(void)
{
    int ry;
    char num[30] = {0,};
    int num_p[30] = {0,}, num_o[30] = {0,};
    int bank_p[100] = {0,}, bank_o[100] = {0,};

    scanf("%s", num);
    int capacity = strlen(num);

    for (int i = 0; i < capacity; i++)
    {
        ry = num[i] - '0';
        num_o[i] = ry;
        num_p[i] = ry;
    }
    bank_f(num_p, bank_p, capacity,0);
    bank_f(num_o, bank_o, capacity, 1);
    wypisz(num_p, bank_p, capacity);
    printf("\n");
    wypisz(num_o, bank_o, capacity);
}
