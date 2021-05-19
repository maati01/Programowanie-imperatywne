#include <stdio.h>

int main() {
    int N,x1,y1,x2,y2,cnt;
    int A[201][201]; //tablica reprezetujaca plaszczyzne

    scanf("%d",&N);


    cnt = 0; //czarne kwadraty

    for(int i = 0; i < 201; i++)
    {
        for(int j = 0; j < 201; j++)
        {
            A[i][j] = 1; //wypelniam tablice jedynkami reprezentujace bialy kolor
        }
    }

    for(int i = 0; i < N; i++)
    {

        scanf("%d %d %d %d",&x1,&y1,&x2,&y2); //zczytuje dane wspolrzednych, ktore potem nadpisze przy drugim zczytywaniu

        for(int r = x1 + 100; r < x2 + 100; r++) //stawiam prostokąt
        {
            for(int c = y1 + 100; c < y2 + 100; c++)
            {
                if(A[r][c] == 1) //sprawdzam gdzie jest bialy oraz bialy i zamieniam
                {
                    A[r][c] = 0;
                }
                else
                {
                    A[r][c] = 1;
                }
            }
        }
    }
    for(int i = 0; i < 201; i++)
    {
        for(int j = 0; j < 201; j++)
        {
            if(A[i][j] == 0)
            {
                cnt++; //zliczam czarne kwadraciki
            }
        }
    }

    printf("%d",cnt);

    return 0;
}
