#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes){
    //return original if either the size of rows or colums exceed the original matrix
    
    return mat;
}*/

int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes)
{
    if( r * c != matSize * (*matColSize))
    {  
        int ** ret_arr = (int **)malloc(sizeof(int *) * matSize);
        int ret_arr_index = 0;
        int i=0, j=0;
        for(i=0; i<matSize; i++)
        {
            int * tmp_arr = (int *)malloc(sizeof(int) * (*matColSize));
            int tmp_arr_index = 0;
            ret_arr[ret_arr_index++] = tmp_arr;
            
            for(j=0; j< *matColSize; j++)
            {
                tmp_arr[tmp_arr_index++] = mat[i][j];
            }
        }

        int * col_arr = (int *)malloc(sizeof(int) * matSize);
        for(i=0; i< matSize; i++)
        {
            col_arr[i] = *matColSize;
        }
        *returnColumnSizes = col_arr;
        *returnSize = matSize;
        return ret_arr;
    }
    else
    {
        int ** ret_arr = (int **)malloc(sizeof(int *) * r);
        int ret_arr_index = 0;
        int i=0, j=0;
        
        int col_rem_size = 0;
        int * tmp_col = NULL;
        int tmp_col_index = 0;
        
        if(col_rem_size == 0)
        {       
            tmp_col = (int *)malloc(sizeof(int) * c);        
            tmp_col_index = 0;
            ret_arr[ret_arr_index++] = tmp_col;
            col_rem_size = c;              
        }
        
        for(i=0; i<matSize; i++)
        {
                   
            for(j=0; j< *matColSize; j++)
            {
                tmp_col[tmp_col_index++] = mat[i][j];
                col_rem_size--;
                
                if(col_rem_size == 0)
                {    
                    if(ret_arr_index != r)
                    {
                        tmp_col = (int *)malloc(sizeof(int) * c);        
                        tmp_col_index = 0;
                        ret_arr[ret_arr_index++] = tmp_col;
                        col_rem_size = c;
                    }
                }
            }
        }
        
        int * col_arr = (int *)malloc(sizeof(int) * r);
        for(i=0; i< r; i++)
        {
            col_arr[i] = c;
        }
        *returnColumnSizes = col_arr;
        *returnSize = r;
        return ret_arr;
    }
    
    
    return NULL;
}


int main(){
    int mat[2][2] = {//[rows][columns]
        {1,2},
        {3,4}
    };

    int matRowSize = sizeof(mat)/sizeof(mat[0]);
    //int matColSize = sizeof(mat[0])/sizeof(mat[0][0]);
    int matColSize[] = {2, 2};
    //desired rows and column values for the reshape
    int r = 1;
    int c = 4;
    //number of elements in the matrix
    int matSize = sizeof(mat)/sizeof(mat[0][0]);
    int returnSize[] = {};
    int returnColumnSizes[sizeof(int)][sizeof(int)] = {};
    matrixReshape(mat, matSize, matColSize, r, c, returnSize, returnColumnSizes);
    return 0;
}