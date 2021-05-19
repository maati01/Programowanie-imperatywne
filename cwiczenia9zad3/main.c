#include <stdio.h>

int main() {
    char s[50],result[50];
    int len = 0,start = 0,max = 0,ind = 0;
    scanf("%s",s);
    while(s[len] != '\0') //dlugosc stringa
    {
        len++;
    }
    while(start < len)
    {
        max = start; //przeszukuje stringa od ostatniego najwiekszego chara
        for(int i = start; i < len; i++) //szukam najwiekszego chara po czym odcinak stringa i przeszukuje od momentu odciecia
        {
            if(s[i] > s[max])
            {
                max = i; //indeks dla najwiekszego chara
            }
        }
        result[ind] = s[max]; //maksymakny char
        ind++;
        start = max + 1; //poczatek nowej iteracji
    }
    result[ind] = '\0'; //znak konca lini zeby printowanie stringa bylo poprawne
    printf("%s",result);
    return 0;
}
