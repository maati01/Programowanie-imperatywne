#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool is_prime(int num)
{
    int ii = 3;
    if(num == 2)
    {
        return true;
    }
    if (num%2 == 0)
    {
        return false;
    }
    if (num <= 1)
    {
        return false;
    }
    while(ii*ii<=num)
    {
        if (num%ii==0)
        {
            return false;
        }
        ii += 2;
    }
    return true;
}
bool growing(int a)
{
    int x,y;
    if(a < 10)
    {
        return true;
    }
    while(a >= 10)
    {
        x = a%10;
        a /= 10;
        y = a%10;
        if(y>x)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    i = 2;
    for(i;i < n;i++)
    {
        if(is_prime(i) && growing(i))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}