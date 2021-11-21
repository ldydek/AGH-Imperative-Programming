#include <stdio.h>
#include <stdlib.h>
#include <math.h>


unsigned int checkSquare(unsigned int i, unsigned int j,
unsigned int w, unsigned int k, unsigned int n, unsigned int arr[])
{
    unsigned int sum = 0;
    for(unsigned int u = 0; u < 2 * w + 1; u++)
    {
        sum += arr[(i - w) * n + (j - w) + u];
    }
    for(unsigned int u = 0; u < 2 * w + 1; u++)
    {
        sum += arr[(i + w) * n + (j - w) + u];
    }
    for(unsigned int u = 1; u < 2 * w; u++)
    {
        sum += arr[(i - w + u) * n + (j - w) ];
    }
    for(unsigned int u = 1; u < 2 * w; u++)
    {
        sum += arr[(i - w + u) * n + (j + w)];
    }

    if(sum == k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    unsigned int n;
    if(scanf("%d",&n) <= 0)
    {
        return 1;
    }

    unsigned int k;
    if(scanf("%d",&k) <= 0)
    {
        return 1;
    }


    unsigned int* arr = (unsigned int*) malloc(n * n * sizeof(unsigned int));
    unsigned int* odp1 = (unsigned int*) calloc(n * n, sizeof(unsigned int));
    unsigned int* odp2 = (unsigned int*) calloc(n * n, sizeof(unsigned int));

    for(unsigned int i = 0; i < n * n; i++)
    {
        if(scanf("%d",&arr[i]) <= 0)
        {
            return 1;
        }
    }

    unsigned int found_squares = 0;

    for(unsigned int i = 1; i < n - 1; i++)
    {
        for(unsigned int j = 1; j < n - 1; j++)
        {
            unsigned int w = 1; // how many sqaures in each direction
            while(i >= w && n >= i + w && j >= w && n >= j + w)
            {
                unsigned int found = checkSquare(i, j, w, k, n, arr);
                if (found == 1)
                {
                    odp1[found_squares] = i;
                    odp2[found_squares] = j;
                    found_squares++;
                }
                w += 2;
            }

        }
    }

    printf("%d\n", found_squares);
    for(unsigned int i = 0; i < found_squares; i++)
    {
        printf("%d %d\n", odp1[i], odp2[i]);
    }


    free(arr);
    free(odp1);
    free(odp2);
}
