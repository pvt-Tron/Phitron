#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int *ptr;
    ptr= &a;
    printf("Value of a: %d\n", a); // = val
    printf("Address  of  a:  = %p \n", &a);  // = adr
    printf("Adrress of ptr: != %p \n", &ptr);
    printf("Address in ptr:  = %p \n", ptr); // = adr
    printf("Deference ptr: %d\n", *ptr); // = val
    *ptr = 10;
    printf("-- ptr set to 10 -- \n"); // = val
    printf("Address in ptr:  = %p \n", ptr); // = adr
    printf("Deference ptr: %d\n", *ptr); // = val
    printf("Value of a: %d\n", a); // = val
    printf("-- ptr2 to a crated -- \n"); // = val
    int *ptr2 = &a;
    printf("Address of  ptr: != %p \n", &ptr); 
    printf("Address of ptr2: != %p \n", &ptr2); // = adr
    printf("Address in ptr2: = %p \n", ptr2); // = adr
    printf("Address  of   a: = %p \n", &a);  // = adr
    printf("Deference  ptr2: %d\n", *ptr); // = val

    printf("Decimal print of ptr: %d\n", ptr);
    printf("Decimal print of  &a: %d \n", &a);
    printf("p print *ptr: %p\n", *ptr);
    // printf("%d\n", ptr);
    

    return 0;
}