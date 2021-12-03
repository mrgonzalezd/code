#include <iostream>
#include <vector>
using namespace std;

void printArray(int array[], int length){
    for(int i=0; i < length; i++){
        cout << array[i] <<endl;
    }
}

int main(){
    vector<int> A{5, 7, 1, 2, 3};
    int B[5];
    //printArray(A, sizeof(A)/sizeof(*A));
    printArray(B, sizeof(B)/sizeof(*B));
    return 0;
}