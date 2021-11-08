#include <iostream>
#include <vector>
using namespace std;

void generateParentheses(int pos, int openingCount, int closingCount, int n);

void printString(std::vector<string> const &arreglo){
    for(int i = 0; i < arreglo.size(); i++){
        std::cout << arreglo.at(i) <<" ";
    }
    cout <<endl;
} 

void printParentheses(int n){
    if(n > 0){
        generateParentheses(0, 0, 0, n);
    }
    return;
}
void generateParentheses(int pos, int openingCount, int closingCount, int n){

    std::vector<string> s;
    for(int i=0; i < 2*n, i++){
        s.at(i) = i;
    }
    if (openingCount && closingCount == n){
        printString(s);
        return;
    }else{
        if(openingCount > closingCount){
        s.insert(s.at(pos), "}");
        generateParentheses(pos+1, openingCount, closingCount + 1, n);
        } 
        if (openingCount < n){
        s.insert(s.at(pos), "{");
        generateParentheses(pos+1, openingCount + 1, closingCount, n);
        }
    }
}


int main(){

    //std::vector<string> s;
    printParentheses(1);
    return 0;
}