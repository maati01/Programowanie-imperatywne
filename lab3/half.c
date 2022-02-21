#include <stdio.h>

int main() {
    int n,suma,sub_suma;
    scanf("%d\n",&n);
    int arr[n];
    suma = 0;


    for(int i = 0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        suma += arr[i];
    }

    if(n == 1)
    {
        printf("%d",0);
        return 0;
    }

    sub_suma = 0;
    for(int i = 0;i<n-1;i++)
    {
        sub_suma += arr[i];
        suma = suma - arr[i];
        if(sub_suma == suma - arr[i+1])
        {
            printf("%d",i+1);
        }
    }

    return 0;
}
