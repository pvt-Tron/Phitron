#include<stdio.h>
#include<string.h>

int is_palindrome(int sn,char *stpl)
{
    int j=sn;
    
    for(int i=0;i<sn;i++)
    {
               
        if(stpl[i]!=stpl[j])
        {
            return 0;
        }
        j++;    
    }
    return 1;
}

int main()
{
//ominonanononanonimo "Fringe"
    char s[20]; // >>> also thi 0 marks ?? <<< N.B.:here 5 in morning of 6 
    int j=1;  //     only 5 hour after deadhline... (NB nota bene{ita})
    for(int i=0;i<20;i++)
    {
        scanf("%c",s[i]);
        j=j+1;
        if(s[i]=='\0'){break;}

    }
// fgets(s,strlen(s),'input.txt');

    int pl=is_palindrome(j,&s);
    if(pl){printf("Not Palindrome");}
    else{printf("Palindrome");}
              
    return 0;

}