main()
{
    int a,b;
    scanf("%c%c",&a,&b);
    
    //int ab=a/10;
    //int ba=(a%10);
    
    printf("%c %c\n",a,b);

    int ab=(a,b)/10;
    int ba=((a+b)%10);


    printf("%d %d\n",ab,ba);
    
    if(ab%ba==0 || ba%ab==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}