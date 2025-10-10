#include<stdio.h>
int main()
{
    char strA[11];
    gets(strA);
    char strB[11];
    gets(strB);
    int n1, n2, nab;
    n1 = strlen(strA);
    n2 = strlen(strB);
    nab = n1 + n2 + 2;
    printf("%d %d\n", n1, n2);
    printf("%s%s\n", strA, strB);
    char tmp = strA[0];
    strA[0] = strB[0];
    strB[0] = tmp;
    char strAB[nab];
    // sndi = 0;
    for(int i = 0; i < nab; i++){
        if(i < n1) strAB[i] = strA[i];
        else if(i == n1) strAB[i] = ' ';
        else{
            strAB[i] = strB[i - n1 - 1];
        }
    }

    printf("%s", strAB);

    return 0;
}