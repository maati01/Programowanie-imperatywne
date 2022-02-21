#include <stdio.h>

int waga(int arr[],int w, int indeks, int n)
{
    if(w == 0)
    {
        return 1;
    }
    if(indeks == n)
    {
        return 0;
    }
    return waga(arr,w - arr[indeks],indeks + 1,n) + waga(arr,w + arr[indeks],indeks + 1,n);

}

int main() {
    int w,indeks,n;
    scanf("%d",&n);
    scanf("%d",&w);
    int arr[n];
    indeks = 0;

    for(int i = 0; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    if(waga(arr,w,indeks,n) == 0)
    {
        printf("NO");
    }
    else printf("YES");

    return 0;
}