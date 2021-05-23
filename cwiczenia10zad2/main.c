#include <stdio.h>
#include <malloc.h>

long power(int x, int y) {
    long result = 1;
    while (y > 0) {
        result *= x;
        y--;
    }
    return result;
}

int *bin(int num, int N) //funkcja zamienia na system binarny
{
    int i = 0;
    int *A = (int *)calloc((long int)N,sizeof(int));
    while (num != 0) {
        A[i] = num % 2;
        num /= 2;
        i++;
    }
    return A;
}

long convert_systems_to_10(int tab[], int len) { //zamiania na system dziesietny
    long res = 0;

    for (int i = 0; i < len; ++i) {
        res += tab[i] * power(2, i);
    }
    return res;

}

int main() {
    long num;
    int M, N, cnt = 0;
    int *tab, temp, temp2;
    scanf("%d %d", &N, &M);

    if (M == 1) {
        printf("0");
        return 0;
    }

    int *A = (int *) calloc((long)power(2, N), sizeof(int)); //tablica trzyma liczby ktore juz wystapily
    A[N] = 1;


    temp = M;

    while (temp < power(2, N)) {
        tab = bin(temp, N);


        for (int i = 0; i < N; ++i) { //zamieniam 0 i 1
            if (tab[i] == 1) {
                tab[i] = 0;
                temp2 = 1;
            } else {
                tab[i] = 1;
                temp2 = 0;
            }
            num = convert_systems_to_10(tab, N);
            tab[i] = temp2;
            if (A[num] != 1 && num % M != 0) { //sprawdzam czy liczba juz wystapila i czy nie jest wielokrotoscia n
                A[num] = 1;
                cnt++;
            }
        }
        temp += M;
        free(tab);
    }
    printf("%d",cnt);
    free(A);
    return 0;
}



