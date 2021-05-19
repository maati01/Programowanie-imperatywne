void convert_systems(int a, int b) //funkcja do zamiany systemów
{
    int k = 0;
    char arr[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char liczba[3];
    while(a > 0)
    {
        liczba[k] = arr[a%b];
        a /= b;
        k += 1;
    }
    for(int i = k-1; i >= 0; i--) //czytam od tylu zeby zapisac w systemie dziesiatkowym
    {
        printf("%c",liczba[i]);
    }

}

int convert_systems_to_10(int a, int b) // funkcja do zamiany na system 10
{
    int liczba = 0;
    int k = 0;
    while (a > 0) {
        liczba += (a % 10)*pow(b, k);
        a /= 10;
        k += 1;
    }
    return liczba;
}
