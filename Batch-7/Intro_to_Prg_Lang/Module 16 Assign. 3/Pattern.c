#include<stdio.h>
void pattern(int x){
    int spaces = x -1;
    int graph1 = 1;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < spaces + graph1; j++){
            if(j < spaces){
                printf(" ");
            }
            else{
                if(i%2 != 0) printf("-");
                else printf("#");
            }
        }
        printf("\n");
        spaces--;
        graph1 += 2;
    }
    spaces += 2;
    graph1 -= 4;
    for(int i = 0; i < x; i++){
        if(i == 0 && x%2 != 0) i++; 
        for(int j = 0; j < spaces + graph1; j++){
            if(j < spaces){
                printf(" ");
            }
            else{
                if(i%2 != 0) printf("-");
                else printf("#");
            }
        }
        printf("\n");
        spaces++;
        graph1 -= 2;
    }

}
int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);
    return 0;
}