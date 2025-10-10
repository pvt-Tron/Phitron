#include<stdio.h>
int main()
{
     // -------------------
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("| %d - ", i);
        for(int j = 1; j <= i; j++){
            printf("%d*", j);
        }
        printf(" - |\n");
    }
    printf("A \n"); // -------------------

    int stars = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= stars; j++){
            printf("*");
        }
        printf("\n");
        stars++;
    }
    
    for(int i = 1; i <= n + 1; i++){ // n + 1
        for(int j = 1; j <= stars; j++){
            printf("*");
        }
        printf("\n");
        stars--;
    }
    printf("B \n"); // -------------------

    
    int stars2 = 1;
    int spaces = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (stars2 + spaces); j++){
            if(j <= spaces) printf(" ");
            else printf("*");
        }
        printf("\n");
        stars2++;
        spaces--;
    }
    
    for(int i = 1; i <= n + 1; i++){ // n + 1
        for(int j = 1; j <= stars2 + spaces; j++){
            if(j <= spaces) printf(" ");
            else printf("*");
        }
        printf("\n");
        stars2--;
        spaces++;
    }

    printf("P \n"); // -------------------
    stars = 1;
    stars2 = 1;
    spaces = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (stars2 + spaces); j++){
            if(j <= spaces) printf(" ");
            else printf("*");
        }
        printf("\n");
        stars2 += 2;
        spaces--;
    }
    
    for(int i = 1; i <= n + 1; i++){ // n + 1
        for(int j = 1; j <= stars2 + spaces; j++){
            if(j <= spaces) printf(" ");
            else printf("*");
        }
        printf("\n");
        stars2 -= 2;
        spaces++;
    }
    
    printf("A + B \n"); // -------------------
    int stars2b = 0;
    stars2 = 1;
    spaces = n;
    // stars = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (spaces + stars2 + stars2b); j++){
            if(j <= spaces) printf(" ");
            else if(j <= spaces + stars2) printf("*");
            else printf("^");
        }
        printf("\n");
        stars2b++;
        stars2++;
        spaces--;
    }
    
    for(int i = 1; i <= n + 1; i++){ // n + 1
        for(int j = 1; j <= (spaces + stars2 + stars2b); j++){
            if(j <= spaces) printf(" ");
            else if(j <= spaces + stars2) printf("*");
            else printf("o");
        }
        printf("\n");
        stars2b--;
        stars2--;
        spaces++;
    }


    return 0;
}