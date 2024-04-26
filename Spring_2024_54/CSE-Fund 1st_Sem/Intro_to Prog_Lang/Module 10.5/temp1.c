#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char word1[1001];
    char arrc1[1000001];
    char arrc2[1001][1001];
    int len1 = 0;
    int stepx = 0;
    int stepy = 0;
    int morten1[2];
    while(n > -5){
        fgets(word1,100,stdin);
        printf("%s ", word1);
        len1 = strlen(word1);
        printf("%d\n", len1);
        if(len1 < 11){
            stepy += len1;
            for(int i = stepx; i < word1[i] != '\0'; i++){
                arrc1[i] = word1[i];
                printf("%c ", word1[i]);
            }
            printf("\n");
        }
        else{
            arrc1[stepx] = word1[0];
            arrc1[stepx + 1] = (char) (((len1 - 2)%10) - '0'); 
            arrc1[stepx + 2] = (char) (((len1 - 2) / 10) - '0');
            // morten1[1] = (len1 - 2)%10;
            // printf("%d", morten1[1]);
            // morten1[0] = ((len1 - 2) / 10);
            // printf("%d ", morten1[0]);
            //arrc1[stepx + 1] = (char) morten1[0];
            //arrc1[stepx + 1] -= '0';
            //arrc1[stepx + 2] = (char) morten1[1];
            //arrc1[stepx + 2] -= '0';
            arrc1[stepx + 3] = word1[len1 - 1];
            printf("%c %c\n", arrc1[stepx + 1],arrc1[stepx + 2]);
            stepy += 5;
        }
        if(n == 0){
            arrc1[stepy] = '\0';
            n = -5;
        }
        else{
            arrc1[stepy] = '\n';
            stepy++;
            stepx = stepy;
            n--;
        }
        printf("%d\n", n);
    }
    int i,tl1,tl2;
    int count1;
    for(i = 0; i < n; i++){
        fgets(word1,100,stdin);
        len1 = strlen(word1);
        if(len1 < 11){
            for(int j = 0; j < len1; j++){
            arrc2[i][j] = word1[j];
            word1[j] = NULL;
            }
            count1 += len1;
        }
        else{
            for(int j = 0; j < len1; i++){
                if(j == 0){
                    arrc2[i][count1] = word1[j];
                    count1++;
                    }
                if(j == (len1 - 2)){
                    arrc2[i][count1 + 3] = word1[j];
                }
                word1[j] = NULL;
            }
            tl1 = len1%10;
            tl2 = len1 / 10;
            arrc2[i][count1] = (char) tl1;
            count1++;
            arrc2[i][count1] = (char) tl2;
            count1++;
            arrc2[i][count1] = '\n';
            count1++;
        }
    }
    //len1 = strlen(arrc1);
    for(int i = 0; arrc1[i] != '\0'; i++){
        printf("%c", arrc1[i]);
    }
    return 0;
}