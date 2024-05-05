#include<stdio.h>
int main()
{
     
    
    int row , col, rown1 , coln1; // row col
    scanf("%d %d", &rown1, &coln1);
    int arr1d[rown1][coln1];
    int revn1;
    if((rown1 + coln1 - 2)%2 == 0){revn1 = (rown1 + coln1 - 2) / 2;}
    else{revn1 = ((((rown1 + coln1 - 2) - 1) / 2) + 1);}
    for(row = 0; row < rown1; row++){
        for(col = 0; col <  coln1; col++){

            scanf("%d ", &arr1d[row][col]);
            
        }    
    }
    int diagnum1 = arr1d[0][0];
    int diagnum2 = arr1d[0][col - 1];
    int rev = col - 2;
    int flag = 0;
    int prime = 0;
    int nd2 = 0;
    for(row = 1; row < rown1; row++){
        for(col = 1; col <  coln1; col++){
            if(row == col){
                if(diagnum1 != arr1d[row][col]){
                    flag++;
                    prime++;
                    if(nd2){break;}
                }
            }
            if(row + rev == revn1){
                if(diagnum2 != arr1d[row][rev]){
                    flag++;
                    nd2++;
                    if(nd2){break;}
                }
            }
            rev--;
        }    
    }
    if(flag == 0){printf("Double diagonal");}
    else if(flag == 1){
        if(prime){printf("Left diagonal");}
        else{printf("Right diagonal");}
        }
    else{printf("No diagonal");}

    return 0;
}