#include <stdio.h>
#include <stdbool.h>

int main() {
    
    // Variable declaration and initialization
    int number = 42;
    printf("The number is: %d\n", number);
    number = number + 8;
    printf("The number after addition is: %d\n", number);
    float decimal = 3.1416;
    printf("The decimal is: %.2f\n", decimal);
    char character = 'A';
    printf("The character is: %c\n", character);
    double largeDecimal = 2.718281828459;
    printf("The large decimal .12 is: %.12f\n", largeDecimal);
    printf("The large decimal lf is: %lf\n", largeDecimal);
    bool isTrue = true;
    printf("The boolean value is: %d\n", isTrue);
    
    // Using long for larger integers
    long long bigNumber = 1234567890123;
    printf("The big number is: %lld\n", bigNumber);
    
    // Taking input from user
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("The number after input is: %d\n", number);
    
    
    return 0;


}