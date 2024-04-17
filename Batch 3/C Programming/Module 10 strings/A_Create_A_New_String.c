#include<stdio.h>
#include<string.h>
int main()
{
    
    //char a[100]="programming\0";
    char s[1001];
    char t[1001];
    scanf("%s/n",s);
    scanf("%s",t);
    int lens = strlen(s);
    int lent = strlen(t);
    printf("%d %d\n",lens,lent);
    printf("%s %s\n",s,t);
    //int st[lens+1+lent]
    //=s[]+" "+t[];
    //printf("%s",st);
    return 0;
}
