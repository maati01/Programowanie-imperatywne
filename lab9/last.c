#include <stdio.h>

//sume np liczby 4 cyfrowej mozemy zapisac w nastepyjący sposoób S = 1111a + 111b + 11c + d
int main() {
    unsigned long long int S,temp,temp2,result = 0,temp1 = 1,k = 1;
    int cnt = 0;
    scanf("%lld",&S);
    temp = S;

    while(temp > 0) //sprawdzam liczbe cyfr
    {
        cnt += 1;
        temp /= 10;
    }

    for(int i = 1; i < cnt; i++) //zliczam najwieksza liczbe z jedynkami(przy współczynniku a)
    {
        temp1 += 10*k;
        k *= 10;
    }

    temp2 = S;
    while(temp1 > 0)
    {
        result += (S/temp1)*k; //wyliczam wspolczynniki od najwiekszego
        S %= temp1;
        k /= 10;
        temp1 /= 10;
    }

    temp = result;
    while (temp > 0) //sprawdzam czy powstała liczba sumuje sie do podanej
    {
        temp1 += temp;
        temp /= 10;
    }

    if(temp1 == temp2)
    {
        printf("%lld",result);
        return 0;
    }
    else{
        printf("-1");
        return 0;
    }

}
