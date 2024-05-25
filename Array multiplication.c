#include <stdio.h>

int main(){
    int a[10][10] , b[10][10] , c[10][10] ;           // a & b are 2d array , c is resultant 2d array
    int r1 , r2 , c1 , c2 ;                           // r1 and r2 is number of rows in matrix 1 & 2 respectively
                                                      // c1 and c2 is number of rows in matrix 1 & 2 respectively
    printf("enter number of rows for matrix 1 : ");
    scanf("%d",&r1);
    printf("enter number of columns for matrix 1 : ");
    scanf("%d",&c1);
    printf("enter number of rows for matrix 2 : ");
    scanf("%d",&r2);
    printf("enter number of columns for matrix 2 : ");
    scanf("%d",&c2);

    if (c1 == r2 ){                                    // essential criteria for matrix multiplication
        printf("enter values for matrix 1 : ");
        for (int i = 0 ; i < r1 ; i++ ){               // this loop runs for r1 (number of row many) times
            for (int j = 0 ; j < c1 ; j++ ){           // similarly this loop run for c1 many times
                scanf("%d",&a[i][j]);                  // values will be stored in array at proper position
            }                                          // also known as run time array initialising
        }
        printf("enter values for matrix 2 : ");
        for (int i = 0 ; i < r2 ; i++ ){
                for (int j = 0 ; j < c2 ; j++ ){
                scanf("%d",&b[i][j]);
            }
        }
    }
    else{
        printf("\nno. of columns of matrix 1 & no. of rows in matrix 2 are not equal \n");
        printf("array multiplication not possible .\n");
        return 0;                                      // this statement will stop further execution of code
    }


    // resultant matrix c = a X b

    for (int i = 0 ; i < r1 ; i++ ){
        for (int j = 0 ; j < c2 ; j++ ){
            int sum = 0 ;
            for (int k = 0 ; k < c1 ; k++ ){
                sum += (a[i][k] * b[k][j]);
            }
            c[i][j] = sum ;
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
