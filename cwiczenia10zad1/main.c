#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>


bool is_prime(int num) //funkcja szuka liczb pierwszych
{
    int ii = 2;
    if (num <= 1)
    {
        return false;
    }
    while(ii*ii<=num)
    {
        if (num%ii==0)
        {
            return false;
        }
        ii++;
    }
    return true;
}

int compareLexicographicallyStrings(char *s1, char *s2, int n) //funkcja porównująca stringi, {-1: s1 > s2, 0: s1 == s2, 1: s1 < s2}
{
    int i = 0;
    while (s1[i] == s2[i])
        i++;

    if (i == n)
        return 0;

    if (s1[i] > s2[i])
        return -1;
    return 1;
}

int main(){
    int i = 0,len = 0,k,ind = 0,ind_res = 0,j = 1;
    char *A = (char *)calloc((unsigned int)50, sizeof(int));
    char *new_result = (char *)malloc((unsigned int)50*sizeof(int));
    char *result = (char *)malloc((unsigned int)50*sizeof(int));
    scanf("%s",A);

    while(A[len] != '\0') //dlugosc stringa
    {
        result[i] = A[i];
        len++;
        i++;

    }
    i = 0;

    for(int o = 0; o < len; o++)
    {
        j = 2;
        while (j != len)
        {
            if (is_prime(j)) {
                k = o;
                ind_res = o;
                while (ind < len) //szukam kolejnych strigów zaczynających się od kolejnych indeksów
                {
                    new_result[ind] = A[ind_res];
                    k += j; //odpowiednie indeksy po przeskoczeniu o p
                    ind_res = k % len;
                    ind++;

                }
                if (compareLexicographicallyStrings(new_result, result, len) == 1) //porównuje znalezione stringi
                {
                    for (int d = 0; d < len; d++) //nadpisuje nowy wynik
                    {
                        result[d] = new_result[d];
                    }
                }
            }
            i++;
            j++;
            ind = 0;
        }
    }

    for(int r = 0; r < len; r++)
    {
        printf("%c",result[r]);
    }
    free(A);
    free(new_result);
    free(result);
    return 0;

}
