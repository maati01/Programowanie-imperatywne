#include <stdio.h>

int main() {
    int n,k,ind,val,temp;
    int tab[200];
    scanf("%d",&n);
    tab[0] = 1;
    ind = 1; //dlosc liczby
    k = 1;
    temp = 0; //zmienna pomocnicza do mnozenia pisemnego
    while(k <= n)
    {
        for(int i = 0;i < ind; i++) //mnozenie pisemne
        {
            val = k*tab[i] + temp;
            temp = val/10;
            tab[i] = val%10;
        }
        while(temp != 0) //reszte przepisuje naprzód dopóki nie zejdzie do zera
        {
            tab[ind] = temp%10;
            temp /= 10;
            ind++;
        }
        temp = 0;
        k++;
    }
    for(int i = ind-1; i >= 0;i--)
    {
        printf("%d",tab[i]);
    }
}