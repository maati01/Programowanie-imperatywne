#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,x,cnt,a,k,b;
    int arr[15];
    scanf("%d %d",&m,&n);

    cnt = 0;
    k = 0;
    b = 0;
    if(m == 1)
    {
        m += 1;
    }
    for(m;m <= n;m++)
    {
        i = 2;
        x = 1;
        for(i;i*i<m && x <= m;i++)
                {
                    if(m %  i == 0)
                    {
                        x += i + m/i;
                    }
                }

                if (i*i == x)
                {
                x += i;
                }
                if(x==m)
                {
                    arr[k] = x;
                    k += 1;
                    cnt += 1;
                    x = 0;
                }

    }
    printf("%d \n",cnt);
    for(b;b<k;b++)
    {
        printf("%d ",arr[b]);
    }
    return 0;
}
