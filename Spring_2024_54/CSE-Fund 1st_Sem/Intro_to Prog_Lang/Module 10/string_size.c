#include<stdio.h>
#include<string.h>
int main()
{
      int n1, n2;
    char w1, w2;
    scanf("%s\n%s", &w1, &w2);
    n1 = sizeof(w1);
    n2 = sizeof(w2);
    n1 += n2 + 1;
    char arrc1[n1];
    int sz1 = sizeof(arrc1) / sizeof(char);
    int sz2 = strlen(arrc1); //need #include<string.h>
    return 0;
}