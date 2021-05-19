#include <stdio.h>

int main() {
    int r,n,x,y,temp,cnt = 0;
    scanf("%d %d",&n,&r);
    int F[n][n];
    int W[n][n];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            scanf("%d",&F[i][j]);
        }
    }

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {

            for(int k = i - r;k <= i + r;k++)
            {
                for(int m = j - r;m <= j + r;m++)
                {
                    if(k >= 0 && k< n && m >= 0 && m < n)
                    {
                        cnt += F[k][m];
                    }
                }
            }
            W[i][j] = cnt;
            cnt = 0;
        }
    }

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            printf("%d ",W[i][j]);
        }
        printf("\n");
    }
    return 0;
}
