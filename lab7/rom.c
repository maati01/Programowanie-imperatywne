#include<stdio.h>

int digit(char c){ //case'y do zamiany na liczby arabskie

    int value=0;

    switch(c){
        case 'I': value = 1; break;
        case 'V': value = 5; break;
        case 'X': value = 10; break;
        case 'L': value = 50; break;
        case 'C': value = 100; break;
        case 'D': value = 500; break;
        case 'M': value = 1000; break;
        case '\0': value = 0; break;
        default: value = -1;
    }

    return value;
}



int main(){
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    char *sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; //wskaznik na liczby rzymskie do printowania
    char roman_number1[12]; //tablice dla liczb rzymskich
    char roman_number2[12];
    int i = 0; //indeks dla tablicy charów
    int number1 = 0;
    int number2 = 0;
    int result,div;

    scanf("%s %s",roman_number1,roman_number2);

    while(roman_number1[i]) //zamiana na liczbe arabskaą
    {

        if(digit(roman_number1[i]) >= digit(roman_number1[i+1]))
        {
            number1 = number1 + digit(roman_number1[i]);
        }
        else
        {
            number1 = number1 + (digit(roman_number1[i+1]) - digit(roman_number1[i]));
            i++;
        }
        i++;
    }

    i = 0;
    while(roman_number2[i]) //zamiana na liczbe arabska
    {

        if(digit(roman_number2[i]) >= digit(roman_number2[i+1]))
        {
            number2 = number2 + digit(roman_number2[i]);
        }
        else
        {
            number2 = number2 + (digit(roman_number2[i+1]) - digit(roman_number2[i]));
            i++;
        }
        i++;
    }

    result = number1 + number2;

    i = 12; //indeks dla tablicy liczb rzymskich

    while(result>0) //zamiana z powrotem na liczbe rzymska
    {
        div = result/num[i];
        result = result%num[i];
        while(div--)
        {
            printf("%s",sym[i]);
        }
        i--;
    }

    return 0;

}

