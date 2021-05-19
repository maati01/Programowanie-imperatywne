#include <stdio.h>
#include <malloc.h>


int main() {
    int N,M,x,y,cnt = 0;
    scanf("%d %d",&N,&M);

    int **A = (int **)malloc((unsigned)(N + 1)*sizeof(int *));
    for (int i = 0; i <= N; i++) //alokacja pamieci dla tablicy 2d
    {
        A[i] = (int *)calloc((unsigned)(N + 1), (unsigned)N*sizeof(int));
    }

    for(int i = 0; i < M; i++)
    {
        scanf("%d %d",&x,&y);
        A[x][y] = 1;
    }

    for(int i = 1; i <= N; i++)
    {
        for(int j = i + 1; j <= N; j++)
        {
            for(int k = j + 1; k <= N; k++) //dla kazdego punktu szukam punktów monochromatycznych
            {
                if(A[i][j] == A[i][k] && A[i][j] == A[j][k]) //sprawdzam czy punkty sie zgadzaja
                {
                    cnt++; //zliczam trojkaty
                }
            }
        }
    }

    for(int i = 0; i < N; i++) //zwolnienie pamieci dla tablicy 2d
        free(A[i]);
    free(A);

    printf("%d",cnt);

    return 0;
}
