#include <stdio.h>

long long compute(int n) { //funkcja sumuje wszystkie nieparzyste liczby(k^2), a reszte parzystych dziele przez 2 i wywyluje rekurencyjnie dla mniejszego zakresu
    if(n==0) return 0;
    long long k = (n+1)/2;
    return k*k + compute(n/2);
}

int main() {
    int N;
    long long result;
    scanf("%d",&N);
    result = compute(N);

    printf("%lld",result);
    return 0;
}
