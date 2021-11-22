#include <stdio.h>
#include <string.h>


int zamiana1 (char c)
{
    switch (c)
    {
        case 'M':
            return 1000;
        case 'D':
            return 500;
        case 'C':
            return 100;
        case 'L':
            return 50;
        case 'X':
            return 10;
        case 'V':
            return 5;
        default:
            return 1;
    }
}

int us_to_rome (int c)
{
    char xy;
    char *xx;
    char t1[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
    char * t2[] = {"CM", "CD", "XC", "XL", "IX", "IV", "I"};
    int t3[] = {1000, 500, 100, 50, 10, 5, 1};
    int t4[] = {900, 400, 90, 40, 9, 4, 1};

    int j=0;
    while (c>0)
    {
        if (c >= t3[j])
        {
            xy = t1[j];
            printf("%c", xy);
            c -= t3[j];
        }
        else if (c >= t4[j])
        {
            c -= t4[j];
            xx = t2[j];
            printf("%s", xx);
        }
        else
            j++;
    }
}

int rome_to_us(char tab1[], int a)
{
    int suma = 0;
    for (int i=0; i<a-1; i++)
    {
        if (zamiana1(tab1[i]) >= zamiana1(tab1[i+1]))
            suma += zamiana1(tab1[i]);
        else
            suma -= zamiana1(tab1[i]);
    }
    suma += zamiana1(tab1[a-1]);
    return suma;
}

int main(void)
{
    int i=0,a=0,b=0,suma=0,y,z,ab;
    char tab1[12], tab2[12];
    while(1)
    {
        scanf("%c", &tab1[i]);
        if ("%d", tab1[i] == 32)
        {
            break;
        }
        i++;
        a++;
    }
    i=0;
    while(1)
    {
        scanf("%c", &tab2[i]);
        if ("%d", tab2[i] == 10)
        {
            break;
        }
        i++;
        b++;
    }
    y = rome_to_us(tab1, a);
    z = rome_to_us(tab2, b);
    y = y+z;
    us_to_rome(y);
}
