#include <stdio.h>

int pow(int a, int b) //potęgowanie
{
    int temp;
    temp = a;

    if(b == 0)
    {
        return 1;
    }

    for (int i = 0; i < b - 1; i++) {
        a *= temp;
    }
    return a;
}

int sum_pows(int i, int m)//suma poteg
{
    int suma = 0, rest;
    while (i > 0) {
        rest = i % 10;
        suma = suma + pow(rest, m);
        i /= 10;
    }
    return suma;
}

void convert_systems_and_print(int a, int b) //funkcja do zamiany systemów i wypisywania ich
{
    int k = 0;
    char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char liczba[5];
    while (a > 0) {
        liczba[k] = arr[a % b];
        a /= b;
        k += 1;
    }
    for (int i = k - 1; i >= 0; i--) //czytam od tylu zeby zapisac w systemie dziesiatkowym
    {
        printf("%c", liczba[i]);
    }
    printf(" ");

}

int convert_systems_to_10(int a, int b) // funkcja do zamiany na system 10
{
    int liczba = 0;
    int k = 0;
    while (a > 0) {
        liczba += (a % 10)*pow(b, k);
        a /= 10;
        k += 1;
    }
    return liczba;
}

int max_number(int m, int b) //funkcja zwracagorna granice w danym systemie
{
    char arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int temp,k = 0;
    int max = 0;
    temp = arr[b-1];
    for(int i = 0; i < m;i++)
    {
        max += temp*pow(b,k);
        k += 1;
    }
    return max;
}

int min_number(int m, int b) //funkcja zwraca dolna granice w danym systemie
{
    int min = 0;
    min = convert_systems_to_10(pow(10, m - 1),b);
    return min;
}

int sum_pows_sys(int i, int b,int m)//suma poteg z roznych systemow
{
    int suma = 0, rest;
    while (i > 0) {
        rest = i % b;
        suma = suma + pow(rest, m);
        i /= b;
    }
    return suma;
}

int main() {
    int temp,m, b,flag = 0;
    scanf("%d %d", &m, &b);
    int i = min_number(m,b);
    int k = max_number(m,b);

    for (i; i < k; i++)
    {
        temp = sum_pows_sys(i,b,m);
        if (temp == i)
        {
            flag += 1;
            convert_systems_and_print(i, b);
        }
    }
    if(flag == 0){
        printf("NO");
    }
}