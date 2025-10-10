#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);

    int sum=a+b+c;
    printf("The sum of a,b and c is %d\n",sum);
    int product=a*b*c;
    printf("The product of a,b and c is %d\n",product);
    int average=sum/3;
    printf("The average of a,b and c is %d\n",average);
    int subtract=a-b-c;
    printf("The subtraction of a,b and c is %d\n",subtract);
    int divide=a/b/c;
    printf("The division of a,b and c is %d\n",divide);
    int modulus=a%b%c;
    printf("The modulus of a,b and c is %d\n",modulus);
    
    // if else to find the greatest number
    // greater >, smaller <, >= greater than or equal, <= smaller/equal,
    //  == equal, != not equal

    if(a > b && a > c)
    {
        printf("The greatest number is a=%d\n",a);
    }
    else if(b > a && b > c){
        printf("The greatest number is b=%d\n",b);
    }
    else{
        printf("The greatest number is c=%d\n",c);
    }
    
    // if else to check if a is even or odd
    if(a % 2 == 0)
        printf("a is even\n");
    else printf("a is odd\n");

    // if else nested to check if a is positive, negative or zero
    if(a > 0)   
        printf("a is positive\n");
    else{
        if(a < 0)
            printf("a is negative\n");
        else
            printf("a is zero\n");
    }

    // Logical operators
    // && (AND), || (OR), ! (NOT)
    if(a > b && a > c)
        printf("a is greater than both b and c\n"); 
    if(a > b || a > c)
        printf("a is greater than either b or c\n");
    if(!(a > b))
        printf("a is not greater than b\n");
    if(!(a > c))
        printf("a is not greater than c\n");

    return 0;
}