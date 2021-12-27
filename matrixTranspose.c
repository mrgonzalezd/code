#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* int** transpose(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes){
    int r = ASize, c = *AColSize, **a = calloc(1, sizeof(int *[c]));
    *returnColumnSizes = malloc(sizeof(int [c]));
    for (int j = 0 ; j < c ; j++) {
        a[j] = calloc(1, sizeof(int [r]));
        (*returnColumnSizes)[j] = r;        
        for (int i = 0 ; i < r ; i++)
            a[j][i] = A[i][j];
    }
    return *returnSize = c, a;
} */


int main(){
    /*int matrix[3][3] = {//[rows][columns]
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };*/
    int **matrix = (int **) malloc(3* sizeof(int *));//making 3 rows of empty arrays
    for(int i=0; i < 3; i++){
        matrix[i] = (int *) malloc(3 * sizeof(int)); //making 3 empty columns
    }
    int count = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrix[i][j] = ++count;
        }
    }


    //int matrixSize = sizeof(matrix)/sizeof(matrix[0][0]);
    int matrixSize = 9;
    //int matRowSize = sizeof(matrix)/sizeof(matrix[0]);
    //int matColSize = sizeof(mat[0])/sizeof(mat[0][0]);
    //int matColSize[] = {3, 3, 3};
    int *matColSize;
    //int returnSize[] = {0};
    int *returnSize;
    //int returnColumnSizes[sizeof(int)][sizeof(int)] = {};
    int **returnColumnSizes;
    //transpose(matrix, matrixSize, matColSize, returnSize, returnColumnSizes);
    return 0;
}