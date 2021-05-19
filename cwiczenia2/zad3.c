#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n,f1,f2,i,temp,iloczyn;
    scanf("%d",&n);
    f1 = 0;
    f2 = 1;
    i = 0;
    temp = 0;
    iloczyn = 0;

    for(i;i<=n;i++)
    {
        iloczyn = f1*f2;
        temp = f1;
        f1 = f2;
        f2 = temp + f2;
        if(iloczyn == n)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");

}