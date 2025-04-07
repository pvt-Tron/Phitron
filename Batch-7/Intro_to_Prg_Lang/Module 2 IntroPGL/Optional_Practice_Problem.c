#include<stdio.h>
int main()
{
   /*   1. Take a number from user and check 
        if its a even number or odd number.
        2. Take a number from user and check 
        if its a positive or negative number.
        3. Explain if else ladder.
            If...else Ladder is a statement that allow to determinate
            if one or more conditions are true or false if it/they true
            is executed the code in its {} else is skipped  if there are
            any are checked the else if conditions as above if all are 
            false it proceed to the next part of the statement "else" 
            and is executed the code in else's {}.
            Each {} can contain multiple if...else statements too those
            will be checked and if there are the satisfied condition are
            executed then it proceed going forward with if..else with one
            rank more if there are multiple if...else nested.
            if an if...else statement contain an if...else statement etc.
            the first to be executed is which is with lower rank (the more
            indented in the whole 1st block{}). (cc)

            */
        int a, b;
        scanf("%d %d", &a, &b);
        if(a%2 == 0) printf("%d is an even Number\n", a);
        else printf("%d is not an odd Number\n", a);
        if(b > 0) printf("%d is a positive Number\n", b);
        else if(b == 0) printf("%d is Zero Number\n", b);
        else printf("%d is not a positive Number\n", b);
        printf("(cc)");
    
    return 0;
}