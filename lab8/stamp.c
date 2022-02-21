#include <stdio.h>
#include <malloc.h>
#include <limits.h>

int main() {
    int n,k,l,sum = 0;
    int max_sum = INT_MIN;
    scanf("%d %d %d",&n,&k,&l);

    int **P = (int **)malloc((unsigned int)k*sizeof(int *));
    for (int i = 0; i < k; i++)
        P[i] = (int *)calloc((unsigned int)l, sizeof(int));

    int **T = (int **)malloc((unsigned int)n*sizeof(int *));
    for (int i = 0; i < n; i++)
        T[i] = (int *)calloc((unsigned int)n, sizeof(int));


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&T[i][j]);
        }
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            scanf("%d",&P[i][j]);
        }
    }

    for (int i = 0; i <= n - k; i++)
    {
        for (int j = 0; j <= n - l; j++)
        {
            for (int m = 0; m < k; m++)
            {
                for (int r = 0; r < l; r++)
                {
                    if (P[m][r] == 1)
                        sum += T[i + m][j + r];
                }
            }
            if(sum > max_sum)
            {
                max_sum = sum;
            }
            sum = 0;
        }
    }

    printf("%d",max_sum);

    free(P);
    free(T);

    return 0;
}
