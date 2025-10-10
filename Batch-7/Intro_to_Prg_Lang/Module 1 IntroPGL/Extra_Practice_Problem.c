/* Exercise Answers
    1. long long <data type> become usefull when is needed 
       to store large numbers in one or more variables
    2. the variable in c must start with a letter 
       (also caps) or an _ ;
       <space>are not allowed also keywords (ex.: "int") 
       can't be used as names of variable, can be used 
       numbers but not as 1st char of name;
    3. [follow solution code]
*/

#include<stdio.h>
int main()
{
    int a;
    float b;
    scanf("%d %f", &a, &b);
    printf("the 2nd number is: %f\nthe 1st number is: %d", b, a);
    
    return 0;
}