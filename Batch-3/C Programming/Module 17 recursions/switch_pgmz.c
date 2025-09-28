#include<stdio.h>
int main()
{
    int month;
    scanf("%d", &month);

switch(month)
    {
        case 1:{printf("January");break;}
        case 2:{printf("February");break;}
        case 3:{printf("March");break;}
        case 4:{printf("April");break;}
        case 5:{printf("May");break;}
        case 6:{printf("June");break;}
        case 7:{printf("July");break;}
        case 8:{printf("August");break;}
        case 9:{printf("September");break;}
        case 10:{printf("October");break;}
        case 11:{printf("november");break;}
        case 12:{printf("December");break;}

        default:
        printf("Invalid Number");
    }
    printf("\n");
    int number;
    scanf("%d", &number);
    
    switch(number) {

        // cases to find odd number
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        
            printf("Odd Number");
            break;
        
        // cases to find even number
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            printf("Even Number");
            break;

        default:
            printf("Invalid Number");
    }
    float number1 = 36.89f;
    double number2 = 36.89;
 
    // find size
    printf("Size of float: %zu\n", sizeof(number1));
    printf("Size of double: %zu", sizeof(number2));

    // Print ASCII value a & b
    char alphabet = 'a';
    printf("%d\n", alphabet);    // 97
    alphabet = 'b';
    printf("%d\n", alphabet);    // 98
    /* <<! sum char (ascii) + int (ascii) 32 is difference A a 
    [48-57 > 0-9] [65-90 > A-Z] [97-122 > a-z] !>> */

    char a = 'p';
    int b = 34;
    int sum = a + b;
    printf("%d", sum);
    return 0;

}