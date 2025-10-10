#include<stdio.h>
//(!) inline ? if(this.proofferta) then => (let.return "you help me with **mt? "); ( < new myx.mx code.mx language).
/* "proofferta italian" for devotion gift for speakers and mods */
// int chkDiagN(int **mt, int r, int c); << how do this? // I will be burned in Hell I think...
// int chkDiagN(int **mt, int r, int c); << how do this?
int main()
{
    /*
        int matrix[row][colums] // static allocation c/c++;
        int matrix= new int[row][colums] // Dynamic allocation;
        Matrix : 1.row or column, 
                 2. n*n, 
                 3. x*y;
        M. Types: 1. Row.Mt 2. Col.Mt (Vector)
                  3. Zero(null).Mt, 4. Diagonal (+=1).Mt,
                  5. Unit (1=).Mt, 6. Scalar(x>0 =) Mt;
        Time Cplx: 1. element access O(1), 
                   2. whole check O(n)^2;
-
        if(r != c) out of diag (0) & if(r == c) diagonal position
        Diagonal chk (r + c == r - 1) == (!(r + c != r - 1))
        -
    */
    int t;
    scanf("%d", &t);
    while(t--){
        int row, col, k; // int mtx;
        scanf("%d %d %d", &row, &col, &k); // scanf("%d", &mtx);
        int mt[row][col];
        for(int r = 0; r < row; r++){
            for(int c = 0; c < col; c++){
                scanf("%d", &mt[r][c]);
            }
        }

        // int x, y; 
        // scanf("%d %d", &x, &y);
        // printf("%d", mt[x][y]);//print: 1-elem/1-row/1-column
        // for(int r = 0; r < row; r++) printf("%d", mt[r][c]);
        // for(int c = 0; c < col; c++) printf("%d", mt[r][c]);

        int no0 = 0;
        int nok = 0;
        for(int r = 0; r < row; r++){
            for(int c = 0; c < col; c++){
                if(r != c){
                    if( mt[r][c] != 0){
                        no0 = 1;
                        break;
                    }
                }
                else{
                    if( mt[r][c] != k){
                        nok = 1;
                        break;
                    }
                }
            }
        }
        
        printf("for %d Error 0: %d\nfor %d Error Diag: %d\n", k, no0, k, nok);
        printf("> ");
        for(int r = 0; r < row; r++){
            for(int c = 0; c < col; c++){
                printf("%d ", mt[r][c]);
            }
            printf("<\n> ");
        }
        printf("^ ^ ^ ^ ^ ");
        printf("\nEnd of Matrix %d\n\n", k);
    }
    printf("\nEnd of Cases");

    return 0;
}
// int chkDiagN(int **mt, int r, int c);
/*
Inputs: 5 5 5 // or 0 1 2;
// test cases
4 
5 5 5
1 2 3 4 5
2 2 3 4 5
3 3 3 4 5
4 4 4 4 5
5 5 5 5 5
5 5 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
5 5 1
1 0 0 0 0
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1
5 5 2
2 0 0 0 0
0 2 0 0 0
0 0 2 0 0
0 0 0 2 0
0 0 0 0 2

*/