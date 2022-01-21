#include <stdio.h>

int main(){

    int arr[]= {1,10,19,20,3,5,7,22,44,17};
    int arrSize = sizeof(arr)/sizeof(int);
    int evenSize;
    int oddSize;
    //checking the sizes for even and odd arrays respectively
    for(int i=0; i < arrSize; i++){
        if(arr[i] % 2 == 0){
            evenSize++;
        }
        else{
            oddSize++;
        }
    }
    int evenArr[evenSize];
    int oddArr[oddSize];
    int evenIndex = 0;
    int oddIndex = 0;
    for(int i=0; i < arrSize; i++){
        if(arr[i] % 2==0){
            evenArr[evenIndex] = arr[i];
            evenIndex++;
        }else{
            oddArr[oddIndex] = arr[i];
            oddIndex++;
        }
    }
    for(int i=0; i < evenSize; i++){
        printf("%d ", evenArr[i]);
    }
    printf("\n");
    for(int i=0; i < oddSize; i++){
        printf("%d ", oddArr[i]);
    }
}