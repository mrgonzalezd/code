#include <stdio.h>
#include <limits.h>
//sorting wont do it
//look for the min value in the array and get the highest subtraction coming right after
int maxProfit(int *prices, int pricesSize){
    int maxProfit = 0;
    int min;
    
    for(int i=0; i<pricesSize; i++){
        if(prices[i]< min){
            min = prices[i];
        }
        else if(prices[i]-min>maxProfit){
            maxProfit = prices[i]-min;
        }
    }
    return maxProfit;
}

int main(){
    int prices[] = {7, 1, 5, 3, 6, 4};
    //ans: 5. buy at 1, sell at 6
    int pricesSize = sizeof(prices)/sizeof(int);
    maxProfit(prices, pricesSize);
    return 0;
}

