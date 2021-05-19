#include <stdio.h>

int main() {
    int n,k,x1,y1,x2,y2,perimeter,cnt,ind,end;
    scanf("%d %d",&n,&k);
    int arr[n][n];
    int tab[n-1][2]; //tablica współrzędnych

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    cnt = 0; // ilosc znalezionych kwadratów
    ind = 0; // indeks dla tablicy wspolrzednych
    end = 0; //indeks do printowania


    for(int i = 1; i < n - 1; i++)
    {
        for(int j = 1; j < n - 1; j++)
        {
            x1 = i - 1; //wspolrzedne rogow
            y1 = j - 1;
            x2 = i + 1;
            y2 = j + 1;
            perimeter = 0;
            while( x1 >= 0 && y1 >= 0 && x2 < n && y2 < n) //rogi musza miescić się w tablicy
            {
                for(int i = y1; i <= y2; i++) //przejscie w prawo
                {
                    perimeter += arr[x1][i];
                }
                for(int i = x1 + 1; i <= x2; i++) //przejscie w dol
                {
                    perimeter += arr[i][y2];
                }
                for(int i = y2 - 1; i >= y1; i--) //przejscie w lewo
                {
                    perimeter += arr[x2][i];
                }
                for(int i = x2 - 1; i > x1; i--) //przejscie w gore
                {
                    perimeter += arr[i][y1];
                }
                if (perimeter == k)
                {
                    cnt++;
                    tab[ind][0] = i;
                    tab[ind][1] = j;
                    ind++;
                    end++;

                }
                perimeter = 0;
                x1--; //przestawiam rogi dla nowego kwadratu
                y1--;
                x2++;
                y2++;
            }
        }
    }

    printf("%d\n",cnt);
    for(int i = 0; i < end; i++)
        printf("%d %d\n",tab[i][0],tab[i][1]);

    return 0;
}
