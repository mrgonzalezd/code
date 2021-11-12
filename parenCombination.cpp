#include <iostream>
#include <vector>
using namespace std;


void generateParentheses(int pos, int openingCount, int closingCount, int n, std::vector<string> arreglo);

void printString(vector<string> arreglo){
    for(int i=0;i< arreglo.size();i++) {
        printf("%s",arreglo[i].c_str());
    }
    cout <<endl;

}

void printParentheses(int n, std::vector<string> arreglo){
    if(n > 0){
        generateParentheses(0, 0, 0, n, arreglo);
    }
    return;
}

void generateParentheses(int pos, int openingCount, int closingCount, int n, vector<string> arreglo){

    if (openingCount == n && closingCount == n){
        printString(arreglo);
        return;
    }else{
        if(openingCount > closingCount){
            arreglo[pos] = '}';
            generateParentheses(pos+1, openingCount, closingCount+1, n, arreglo);
        }
        if (openingCount < n){
            arreglo[pos] = '{';
            generateParentheses(pos+1, openingCount+1, closingCount, n, arreglo);
        }
        cout << "stack call rejected" <<endl;
    }
}

int main(){

    int parenSize = 2;
    cout << "Pares de parentesis a generar:" <<endl;
    //cin >> parenSize;
    vector<string> s(parenSize*2);
    printParentheses(parenSize, s);
    return 0;
}