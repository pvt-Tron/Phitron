#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int cnt[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        //printf("%c ",s[i]);
        //char value = s[i];
        //printf("%c ",value);
        //int value = s[i]-97;
        //printf("%d ",value);
        int value = s[i]-'a';
        cnt[value]++;
    }
    //for(int i=0;i<26;i++)
    //{
    //    if(cnt[i]!=0)
    //    {
    //        printf("%c - %d\n",i+'a',cnt[i]);
    //   }
    //}
    
    for(int i=0;i<strlen(s);i++)
    {
        //if(cnt[i]!=0)
        //{
    //int value=s[i];
        
        int value=s[i]-97;
    //printf("%d ",value);
        //printf("%c - %d\n",i+'a',cnt[i]);
        //printf("%d - %d\n",value+'a',cnt[value]);
        if(cnt[value]!=0)
        {
            printf("%c - %d\n",value+'a',cnt[value]);
        }
        cnt[value]=0;
        //}
    }
    return 0;
}