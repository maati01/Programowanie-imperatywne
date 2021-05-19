#include <stdio.h>


int main() {
    int n,rectangle,max_rectangle,x,y,height;
    scanf("%d",&n);
    int arr[n][n];

    rectangle = 0;
    max_rectangle = 0;

    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int j = 0; j < n;j++)//przepisuje pierwszy wiersz do tablicy, gdy pole jest uzytkowe ma powierzchnie 1
    {
        if (arr[0][j] == 0)
        {
            arr[0][j] = 1;
        }
        else
        {
            arr[0][j] = 0;
        }
    }

    for(int i = 1; i < n;i++) //zliczam w kazdej komórce wielkości pojedynczych prostokątów w kolumnach
    {
        for(int j = 0; j < n;j++)
        {
            if (arr[i][j] != 1)
            {
                arr[i][j] += arr[i-1][j] + 1;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }

    x = 0; //indeksy dla prostokątów w kolumnach
    y = 0;

    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < n;j++)
        {
            height = arr[i][j];
            x = j - 1; //indeks w lewo
            y = j + 1; //indeks w prawo
            rectangle = height;
            while((x >= 0 || y < n) && height > 0)
            {

                if(x >= 0 && arr[i][x] >= height)
                {
                    rectangle += height;
                    x--;
                }
                if(y < n && arr[i][y] >= height)
                {
                    rectangle += height;
                    y++;
                }
                if(rectangle > max_rectangle)
                {
                    max_rectangle = rectangle;
                }
                if((x < 0 || arr[i][x] < height) && (arr[i][y] < height || y >=n)) //jesli juz znalazlem wszystkie prostokąty na jendym poziomie to obnizam poziom;
                {
                    height--;
                    rectangle = height; // gdy obnizam poziom ustawiam wyjsciowy prostokat na wysokosc slupka startowego
                }
            }
            if(height > max_rectangle) //sytacja gdy pojedynczy slupek ma najwieksze pole
            {
                max_rectangle = height;
            }
        }

    }

    printf("%d",max_rectangle);
    return 0;
}