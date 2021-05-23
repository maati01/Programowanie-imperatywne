#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <limits.h>

int* bin(int num) //funkcja zamienia na system binarny
{
    int i = 0,temp = num;
    int *A = (int *)calloc((unsigned int)(ceil(log2(num)) + 2), sizeof(int));
    while(num != 0)
    {
        A[i] = num%2;
        num /= 2;
        i++;
    }
    A[(int)ceil(log2(temp)) + 1] = i; //w ostatnim indeksie trzymam dlugosc tablicy
    return A;
}

int* add_bin(int C[],int B[],int num,int G) //funkcja dodaje kolejne poteg dwojek
{
    int i = 0;
    int len = B[(int)ceil(log2(G)) + 1];
    int *tab;
    tab = bin(num);
    for (int j = 0; j < len; ++j) //sprawdzam czy nie ma kolizji podczas zliczania poteg
    {
        if(tab[j] == 1 && B[j] == 0)
        {
            return C;
        }
    }

    while(num != 0)
    {
        C[i] += num%2;
        num /= 2;
        i++;
    }
    free(tab);
    return C;
}

int main() {
    int N,G,temp = 0,len_B,min = INT_MAX,flag = 0;
    scanf("%d %d",&N,&G);
    int *A = (int *)malloc((unsigned int)N*sizeof(int)); //tablica wejsciowa
    int *C = (int *)calloc((unsigned int)N,sizeof(int)); //tablica trzymajaca ilosc poteg dwójek
    int *B;


    for (int i = 0; i < N; ++i)
    {
        scanf("%d",&A[i]);
        if(A[i] >= G) //sprawdzam sytacje gdy wszystkie elementy sa >= G
        {
            flag++;
        }
        if(A[i] == G)
        {
            temp++;
        }
    }

    if (flag == N) //sytacja gdy wszystkie elementy sa wieksze badz rowne G
    {
        printf("%d",temp);
        return 0;
    }
    temp = 0;

    B = bin(G);
    len_B = B[(int)ceil(log2(G)) + 1]; //ostani indeks
    for(int i = 0; i < N; i++) //zliczam potegi dwójek
    {
        if (A[i] < G)
        {
            C = add_bin(C,B, A[i],G);
        }
        if (A[i] == G) //flaga gdy wystepuje ta sama wartosc G w tablicy A
        {
            temp = 1;
        }
    }

    for (int i = 0; i < len_B; ++i)
    {
        if(B[i] == 1 && min > C[i]) //minimalizuje wystepowanie potęg dwójek dla liczby G tak aby nie mogła powstać
        {
            min = C[i];
        }
    }

    if(temp)
    {
        min++;
    }

    printf("%d",min);
    free(A);
    free(C);
    free(B);
    return 0;

}