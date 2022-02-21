#include <stdio.h>
#include <stdbool.h>


bool is_prime(int num) //funkcja szuka liczb pierwszych
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

int main() {
    int L,U,K,liczba,licznik,suma,rest;
    bool flag = true;
    licznik = 0;
    liczba = 0;
    suma = 0;
    rest = 0;
    scanf("%d %d %d",&L,&U,&K);
    for(L; L <= U; L++)
    {
        liczba = L;
        if(is_prime(L)) {
            while (liczba != 4 && flag) //warunek końca
            {
                while (liczba > 0) {
                    rest = liczba % 10;
                    liczba /= 10;
                    suma = suma + rest * rest; //sumuje kwadraty cyfr
                }
                liczba = suma;
                suma = 0;
                if (liczba == 1) {
                    licznik += 1;
                    flag = false; //flaga pozwala przerwac petle w odpowiednim momencie
                }
            }
        }
        flag = true;
        if(licznik == K)
        {
            printf("%d",L);
            return 0;
        }
    }
    printf("%d",-1);
    return 0;

}
