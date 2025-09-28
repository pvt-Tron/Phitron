#include<stdio.h>
//#include<string.h>
int main()
{
    
    //char a[100]="programming\0";
    char a[100];
    scanf("%s",a);
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    {
        count++;
    }
    //fgets(a,19,stdin);
    //a[17]='\0';
    printf("%d",count);
        
    return 0;

}