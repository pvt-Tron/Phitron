void print1(int *a){
    for(int i = 1; i <= *a; i++){
        printf("%d", i);
        if(i < (*a)){printf(" ");}
    }
    
}

int main()
{
    int *a1;
    scanf("%d", &a1);

    //printf("The sum %d + %d is: %d", a1, b1, sum1(&a1,&b1));
    print1(&a1);

    
    return 0;
}