#include <stdio.h>

int main() {
    int N,K,suma,max,indeks;
    scanf("%d %d",&N,&K);
    int arr[N];
    suma = 0;
    max = 0;
    indeks = 0;
    for(int i = 0; i < N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j = 0; j < K;j++)
    {
        max = arr[0];
        for(int k = 0; k < N;k++)
        {
            if(arr[k] > max) //szukam najwiekszej wartosci przed zamiana
            {
                max = arr[k];
                indeks = k;
            }
        }
        arr[indeks] = max/2; //podmieniam wartosci przy indeksie
    }
    for(int i = 0; i < N;i++) //sumuje wartosci po podmianie
    {
        suma += arr[i];
    }
    printf("%d",suma);
}