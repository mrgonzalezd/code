#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//size of either array is at most 1000
// numbers within arrays range from 0 to 1000

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int *arr = (int*)malloc(sizeof(int)*nums1Size);

    int positionCount = 0;
    int i = 0;
    int j= 0;
    qsort(nums1, nums1Size, sizeof(int), cmpfunc);
    qsort(nums2, nums2Size, sizeof(int), cmpfunc);
    for(; i < nums1Size;){
        if(i==nums1Size-1){
            break;
        }
        for(; j < nums2Size;){
            if(nums1[i] == nums2[j]){
                arr[positionCount] = nums1[i];
                positionCount++;
                i++;
                j++;
                break;
            }else if(nums1[i] < nums2[j]){
                if(i==nums1Size-1){
                    break;
                }else{
                    i++;
                }
            }else if(nums2[j] < nums1[i]){
                if(j==nums2Size-1){
                    break;
                }
                else{
                    j++;
                }
            }
        }
    }
    //*returnSize = positionCount;
    return arr;
}

int main(){
    //int nums1[] = {7,2,2,4,7,0,3,4,5};
    //int nums2[] = {3,9,8,6,1,9};
    //answer should be: {3}
    int nums1[] = {1,2,2,1};
    int nums2[] = {2,2};
    //answer should be:{2,2}
    int nums1Size = sizeof(nums1)/sizeof(int);
    int nums2Size = sizeof(nums2)/sizeof(int);
    int *returnSize = 0;
    intersect(nums1, nums1Size, nums2, nums2Size, returnSize);
    return 0;
}