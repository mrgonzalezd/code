#include <stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))

int maxSubArray(int* nums, int numsSize){
    int max = -1000000000;
    int sum = 0;
    
    if(numsSize == 1){
        max = *nums;
        return max;
    }
    
    for(int i= 0; i < numsSize; i++){
        sum = 0;
        for(int j=i; j< numsSize; j++){
            sum += nums[j];
            max = MAX(max, sum);
            
        }
    }
    printf("%d\n", max);
    return max;
}

int main(){
    int arr[] = {-2,1};
    maxSubArray(arr, sizeof(arr)/sizeof(int));
}