#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int a[] = {7};
    //int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int b[5];
    
    
    int aSize = sizeof a / sizeof *a;
    int bSize = sizeof b / sizeof *b;
    int flag  = 0;
    int cnt_succes  = 0;
    int total_cases = 100000;

    for(int k=0;k<total_cases;k++)
    {
        for(int i=0; i < 5; i++){//rand
            b[i] = rand() % 10;
        }

        for(int i = 0; i < bSize; i++){ // B size = i
            int inner_flag = 0; // Suponer B esta en A
            for(int j = 0; j < aSize; j++){ // a size J
                if(b[i] == a[j]){ // Aqui
                    inner_flag = 1;
                }
            }
            flag = inner_flag; // save last state
            if(inner_flag == 0) // not found
            {
                break;
            }
        }
        if(flag == 1)
        {
            cnt_succes++;
        }
    }

    float probabilty = ((float)cnt_succes)/((float)total_cases);
    printf("%d\r\n",cnt_succes);
    printf("%d\r\n",total_cases);
    printf("P = %lf\r\n",probabilty);

    /*
    printf("A: ");
    for(int x = 0; x < aSize; x++){
        printf("%d ", a[x]);
    }
    printf("B: ");
    for(int y = 0; y < bSize; y++){
        printf("%d ", b[y]);
    }
    printf("Flag: %d\n", flag);
    */
    return 0;
}