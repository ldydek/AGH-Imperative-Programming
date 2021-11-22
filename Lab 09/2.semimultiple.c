#include <stdio.h>

int main()
{
    long int n=0;
    long int m=0;

    scanf("%ld %ld",&n,&m);
    long int s=1<<n;


    long int res=0;
    for (long int i=0; i<s; i++)
    {
        if (i%m!=0)
        {
            for (long int j=0; j<n; j++)
            {
                long int k=i^(1<<j);

                if (k%m==0 && k!=0)
                {
                    res++;
                    break;
                }
            }
        }

    }
    printf("%ld",res);
}
