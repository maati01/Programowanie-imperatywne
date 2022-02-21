#include <stdio.h>

int main() {
    int N,K,row,col,len,sum = 0,max_sum = -1;
    scanf("%d %d", &N,&K);
    int arr[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) //badam dla kazdego punktu rozne sciezki
        {
            row = i;
            col = j;
            len = 1;

            while(len <= K) //sciezka do góry po przekątnej
            {
                if(row < 0)
                {
                    row = N - 1;
                }
                if(col >= N)
                {
                    col = 0;
                }
                sum += arr[row][col];
                row -= 1;
                col += 1;
                len += 1;
            }
            if(sum > max_sum)
            {
                max_sum = sum;
            }
            row = i; //ustawiam wyjsciowe indeksy, dlugosc i sume
            col = j;
            sum = 0;
            len = 1;

            while(len <= K) //sciezka w prawo
            {
                if(col >= N)
                {
                    col = 0;
                }
                sum += arr[row][col];
                col += 1;
                len += 1;
            }
            if(sum > max_sum)
            {
                max_sum = sum;
            }
            row = i;
            col = j;
            sum = 0;
            len = 1;

            while(len <= K) //sciezka na dół po przekątnej
            {
                if(row >= N)
                {
                    row = 0;
                }
                if(col >= N)
                {
                    col = 0;
                }
                sum += arr[row][col];
                col += 1;
                row += 1;
                len += 1;
            }
            if(sum > max_sum)
            {
                max_sum = sum;
            }
            row = i;
            col = j;
            sum = 0;
            len = 1;

            while(len <= K) //sciezka w dół
            {
                if(row >= N)
                {
                    row = 0;
                }
                sum += arr[row][col];
                row += 1;
                len += 1;
            }
            if(sum > max_sum)
            {
                max_sum = sum;
            }
            sum = 0;
        }
    }
    printf("%d",max_sum);
    return 0;
}
