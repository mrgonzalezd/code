#include <iostream>
using namespace std;

void search(int array[], int size){
    int flag= 0;
    for(int i = 0; i < size; i++){
        if(array[i] == i){
            cout << i <<endl;
            flag = 1;
        }
    }
    if(flag != 1){
        cout << "not found" <<endl;
    }
}

int main(){
    int a[] = {-1, 0, 2, 5, 7};

    search(a, sizeof(a)/sizeof(a[0]));
}