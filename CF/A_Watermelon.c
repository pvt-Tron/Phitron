#include<stdio.h>
int main()
{

    int n,n1,even1,part1,part2, flag = 0;
    float partf1,partf2,di_F,tmp1,divider1 = 2;
    partf1 = 5;
    partf2 = 2;
    tmp1 = partf1 / partf2;
    //printf("%0.2f\n", tmp1);
    partf1 = 0;
    partf2 = 0;
    tmp1 = 0;
    scanf("%d", &n);
    n1 = n / divider1;
    
    for(int i = 1; i <= (n / divider1); i++)
            {
                if(n%i == 0){
                    flag = 1;
                    break;
                }
            }
    if(flag == 0){printf("NO");}
    else{
        if(n%2 == 0){
            even1 = n / 2;
            if(even1%2 == 0){printf("YES");}
            else{
                flag = 0;
                for(int i = 1; i <= (n1 / divider1); i++)
                {
                    if(n%i == 0){
                        flag = 1;
                        break;
                    }
                }
            if(flag == 0){printf("NO");}
            else{printf("YES");}
            }
        }
        else{
            partf1 = n / divider1;
            //printf("%0.2f ", partf1);
            tmp1 = ((n - 1) / 2);
            di_F = partf1 - tmp1;
            partf1 = partf1 + di_F;
            partf2 = partf1 - di_F;
            part1 = (int) partf1;
            part2 = (int) partf2;
            //printf("%0.2f %0.2f %0.2f %0.2f ", tmp1, di_F, partf2, partf1);
            //printf("%d %d\n", part1, part2);
            if(part1%2 == 0 && part2%2 == 0){printf("YES");}
            else{printf("NO");}
        }
    }    
    return 0;

}