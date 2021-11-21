#include <stdio.h>

int main()
{
    int a[200],n,ctr=0,temp;
    a[0]=1;
    scanf("%d", &n);

    for(n; n>=2; n--)
    {
        temp=0;
        for(int i=0; i<=ctr; i++)
        {
            temp=(a[i]*n)+temp;
            a[i]=temp%10;
            temp=temp/10;
        }
        while(temp>0)
        {
            a[++ctr]=temp%10;
            temp=temp/10;
        }
    }

    for(int i=ctr; i>=0; i--)
        printf("%d",a[i]);

    return 0;
}
