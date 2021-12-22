#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    double median;
    int nums[nums1Size+nums2Size];
    int numsSize = sizeof(nums)/sizeof(int);
    for(int i = 0; i < nums1Size; i++){
        nums[i] = nums1[i];
    }
    for(int i=0; i < nums2Size; i++){
        nums[(nums1Size)+i] = nums2[i];
    }
    qsort(nums,numsSize,sizeof(int),cmpfunc);
    if(numsSize % 2 == 0){
        median = (double) (nums[(numsSize/2) -1]+nums[(numsSize/2)])/2;
    }else{
        median = (double) nums[(numsSize)/2];
    }
    //printf("%lf\n", median);
    return median;
}

int main(){
    int nums1[] = {1,3};
    int nums2[] = {2, 4};
    int nums1Size = sizeof(nums1)/sizeof(int);
    int nums2Size = sizeof(nums2)/sizeof(int);
    findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size);
    return 0;
}