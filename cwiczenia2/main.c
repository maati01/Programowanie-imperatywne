#include <stdio.h>
#include <stdlib.h>

bool is_prime(int num)
{
    int ii = 2;
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
        ii++;
    }
    return true;
}

int main()
{
    int n,i;
    scnaf("%d",n);
    i = 2;
    for (i,i < n,i++)
    {
        if is_prime(i)
        {
            printf("%d",i)
        }
    }

}
