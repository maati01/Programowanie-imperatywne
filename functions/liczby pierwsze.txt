#include <stdbool.h>


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
