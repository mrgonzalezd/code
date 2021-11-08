#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

//void printString(const vector<string> &);
std::vector<string> s;
void parenCounter(string s, int openingCount, int closingCount, int n){
    if (openingCount && closingCount == n){
        cout << s <<endl;
    }else if(openingCount > closingCount){
        parenCounter(s + "}", openingCount, closingCount + 1, n);
    }else if (openingCount < n){
        parenCounter(s + "{", openingCount + 1, closingCount, n);
    }
}

void printString(std::vector<string> const &arreglo){
    for(int i = 0; i < arreglo.size(); i++){
        std::cout << arreglo.at(i) <<" ";
    }
    cout <<endl;
}

int main(){

}