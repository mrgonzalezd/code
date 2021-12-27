#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//answer should be true if there's a nearby value of at most k units from the index
bool containsNearbyDuplicate(int* nums, int numsSize, int k){
    
    bool answer = false;
    
    for(int i=0; i < numsSize; i++){
        int upper = (numsSize<(i+1)+k)?numsSize:(i+1)+k;
        for(int j=i+1; j < upper; j++ ){
            
            if(nums[i]==nums[j]){
                answer = true;
                return answer;
            }
        }
    }
    return answer;
}

int main(){
    int nums[] = {1,0,1,1}; //should be true
    int k = 2;
    int numsSize = sizeof(nums)/sizeof(int);
    containsNearbyDuplicate(nums, numsSize, k);
}