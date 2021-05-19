#include <stdio.h>
#include <limits.h>

int main() {
    int N,ind,min,end,temp=0,cnt=0;
    scanf("%d",&N);
    int t2[N*N],pointers[N],t1[N][N];

    for(int i = 0; i < N; i++)
    {
        pointers[i] = 0; //wskazniki do kolumn

        for(int j = 0;j < N;j++)
        {
            scanf("%d",&t1[i][j]);
        }
    }

    ind = 0; //indeks dla tablicy wyjsciowej
    min = INT_MAX; //ustawiam wartosc minimalna dla najwiekszej mozliwej wartosci
    end = N*N;
    while(cnt < N*N)
    {
        for(int i = 0; i < N;i++)
        {
            if(pointers[i] < N && min > t1[i][pointers[i]])
            {
                temp = i; //indeks dla najmniejszej wartosci dla danej iteracji
                min = t1[i][pointers[i]];
            }
            else if(min == t1[i][pointers[i]]) //jesli elemnt minimalny jest taki sam to go pomijam
            {
                end--;
                pointers[i]++;
                cnt++; //counter potrzebny do warunku końca, jeśli wskazniki są rowne wymiarom tablicy to znaczy ze doszły do końca
            }

        }
        if(min != t2[ind-1])//dodaje tylko wtedy gdy jest inny od poprzedniego
        {
            t2[ind] = min;
            ind += 1;
        }
        pointers[temp]++;
        cnt++;
        min = INT_MAX;

    }
    for(int i = 0; i < ind; i++)
    {
        printf("%d ",t2[i]);
    }
    return 0;
}
