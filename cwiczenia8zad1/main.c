#include <stdio.h>
#include <malloc.h>
#include <math.h>

int main() { //prawdopodobnie trzeba uzyc long long bo wywala sie dla >40
    int N,K,number,temp,cnt = 1,flag = 1;

    scanf("%d %d",&N,&K);
    int *arr = (int *)calloc(N, N*sizeof(int));

    int ind = 0; //indeks dla tablicy arr zeby czytac od konca
    //liczba możliwych ciągów to 2^N - 1

    if(K == 1) //sytacja gdy same zera
    {
        for (int i = 0; i < N; ++i)
        {
            printf("%d",0);
        }
        free(arr);
        return 0;
    }
    if(N == 1 && K == 2) //szczególny przypadek
    {
        printf("%d",1);
        free(arr);
        return 0;
    }

    for(int i = 1; i < pow(2,N) ; i++) //szukam liczb z przedziału i zamieniam je na system binarny
    {
        number = i;
        temp = 2;
        while(number > 0 && flag != 0)
        {
            if(temp == 1 && number%2 == 1)//gdy dwie jedynki obok siebie to skupiuje
            {
                flag = 0;
            }

            temp = number % 2;
            arr[ind] = temp;
            number /= 2;
            if(number > 0)
            {
                ind++;
            }
        }
        if(flag != 0)
        {
            cnt++;
        }
        if(cnt == K && ind < N) //warunek konca
        {
            for (int i = 0; i < N - ind - 1; i++) //uzupelnienie reszty wyniku zerami
            {
                printf("%d",0);
            }

            for (int j = ind; j >= 0; j--)
            {
                printf("%d",arr[j]);
            }
            free(arr);
            return 0;

        }
        flag = 1;
        arr = (int *)calloc(N, N*sizeof(int));
        ind = 0;

    }
    printf("%d",-1);
    free(arr);
    return 0;
}
