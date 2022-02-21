#include <stdio.h>
#include<stdlib.h>

int comp (const void * elem1, const void * elem2) {
    return *(int*)elem1 - *(int*)elem2;
}
int main() {
    unsigned N;
    int K,licznik,indeks,flag;
    licznik = 0;
    indeks = 0;
    scanf("%d %d",&N,&K);

    int* tab = (int*)calloc(N, sizeof(int));
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &tab[i]);
    }

    qsort(tab, N, sizeof(*tab), comp); //tablica posortowana rosnąco

    int i = 0;
    while(i < N)
    {
        indeks = i;
        while(indeks + 1 < N && tab[indeks] == tab[indeks+1]) // sprawdzam ile jest tych samych wartosci
        {
            indeks += 1; //indeks dla tych samych wartosci
        }
        if(indeks + 1 < N && tab[indeks+1] - tab[indeks] <= K) //sprawdzam warunek dla tych samych wartosci
        {
            licznik = licznik + indeks - i + 1; //podliczam
        }
        else if(i - 1 >= 0 && tab[i] - tab[i-1] <= K) //sprawdzam dla przypadku gdy indeks "tych samych wartości" spełnia warunek dla poprzedniego wyrazu
        {
            licznik = licznik + indeks - i + 1; //podliczam
        }
        i = indeks + 1;
    }
    printf("%d",licznik);
    return 0;
}