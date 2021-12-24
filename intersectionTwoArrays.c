#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int size = 0;
    for(int i= 0; i < nums1Size; i++){
        for(int j= 0; j < nums2Size; j++){
            if(nums1[i] == nums2[j]){
                size++;
                memcpy(returnSize,nums1[i], sizeof(int));
            }
        }
    }

    return returnSize;
}

int main(){
    int nums1[] = {1,2,3,0,0,0};
    int m = 3;
    int nums2[] = {2, 5,6};
    int n = 3;
    int nums1Size = sizeof(nums1)/sizeof(int);
    int nums2Size = sizeof(nums2)/sizeof(int);
    int returnSize[] ={};
    intersect(nums1, nums1Size, nums2, nums2Size, returnSize);
    return 0;
}