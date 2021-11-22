#include <stdio.h>


int main(void)
{
    unsigned long long s, currsum, currval, currval1, mid, result;
    int bol = 1;
    scanf("%llu", &s);
    currsum = s;
    currval = 1;
    while (currval <= currsum)
    {
        mid = (currval + currsum)/2;
        result = 0;
        currval1 = mid;
        while (currval1 != 0)
        {
            result += currval1;
            currval1 /= 10;
        }
        if (result == s)
        {
            printf("%llu", mid);
            bol = 0;
            break;
        }
        if (result < s)
            currval = mid + 1;
        else
            currsum = mid -1;
    }
    if (bol == 1)
        printf("%d", -1);
}
