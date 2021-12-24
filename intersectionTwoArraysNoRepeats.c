#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//size of either array is at most 1000
// numbers within arrays range from 0 to 1000
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int *arr = (int*)malloc(sizeof(int)*nums1Size);
    int positionCount = 0;
    int i = 0;
    bool visited[1001] = {false};
    for(; i < nums1Size; i++){
        for(int j= 0; j < nums2Size; j++){
            if(nums1[i] == nums2[j]){
                if(visited[nums1[i]] == true){
                    break;
                }else{
                    arr[positionCount] = nums1[i];
                    visited[nums1[i]] = true;
                    positionCount++;
                    break;
                }
            }
        }
    }
    *returnSize = positionCount;
    return arr;
}

int main(){
    int nums1[] = {1,2,2,1};
    int nums2[] = {2, 2};
    int nums1Size = sizeof(nums1)/sizeof(int);
    int nums2Size = sizeof(nums2)/sizeof(int);
    int *returnSize = 0;
    intersection(nums1, nums1Size, nums2, nums2Size, returnSize);
    return 0;
}