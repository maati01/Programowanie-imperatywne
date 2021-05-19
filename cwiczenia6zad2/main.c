#include <stdio.h>

int main() {
    int T,val,y,len;
    scanf("%d",&T);
    int arr[T][T];

    val = 1;
    y = 0;
    len = T - 1;

    while(y <= len)
    {
        for(int i = y; i <= len; i++) //petla w prawo
        {
            arr[y][i] = val;
            val++;
        }
        for(int i = y + 1; i < len; i++) //petla w dol
        {
            arr[i][len] = val;
            val++;
        }
        for(int i = len; i > y; i--) //petla w lewo
        {
            arr[len][i] = val;
            val++;
        }
        for(int i = len; i > y; i--) //petla w gore
        {
            arr[i][y] = val;
            val++;
        }
        y++;
        len--;
    }

    for(int i = 0; i < T; i++)
    {
        for(int j = 0; j < T; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
