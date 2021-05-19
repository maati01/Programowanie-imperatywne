#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Mateusz Powêska grupa 17

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
bool goldbach(int a)
{
    int i = 2;
    for (i; i <= a - i; i++)
    {
        if (is_prime(i) && is_prime(a - i))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int a,b = 0;
    printf("Podaj zakres: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=b || a <= 4)
    {
        printf("Zly zakres!");
        return 0;
    }
    int copy_a = a;
    while(a<=b && goldbach(a))
    {
        a++;
    }
    if (a-1 == b)
    {
        printf("Wszystkie liczby w zakresie od %d do %d spelniaja hipoteze Goldbacha",copy_a,b);
    }
    else
    {
        printf("Nie wszystkie liczby w zakresie od %d do %d spelniaja hipoteze Goldbacha",copy_a,b);
    }
    return 0;
}
