#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}



void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int temp[m+n]; //size nums1 should be before merging
    
    for(int i=0; i < m; i++){
        temp[i] = nums1[i];
    }
    for(int i=0; i < n; i++){
        temp[m+i] = nums2[i];
    }
  
    qsort(temp,sizeof(temp)/sizeof(int),sizeof(int),cmpfunc);
    
    //sorts temp
    //todo: set nums1 = temp
    memcpy(nums1, temp, sizeof(temp));
}

int main(){
    int nums1[] = {1,2,3,0,0,0};
    int m = 3;
    int nums2[] = {2, 5,6};
    int n = 3;
    int nums1Size = sizeof(nums1)/sizeof(int);
    int nums2Size = sizeof(nums2)/sizeof(int);
    merge(nums1, nums1Size, m, nums2, nums2Size, n);
    return 0;
}