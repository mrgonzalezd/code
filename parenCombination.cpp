//todo: mover vector afuera

#include <iostream>
#include <vector>
using namespace std;

void generateParentheses(int pos, int openingCount, int closingCount, int n);

void printString(vector<string> arreglo){
    //for(auto i = arreglo.begin(); i != arreglo.end(); i++){
    for(int i=0;i< arreglo.size();i++) {
        //cout << *i <<"";
        printf("%s",arreglo[i].c_str());
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

    vector<string> s(2*n); // mover vector afuera
    
    if (openingCount == n && closingCount == n){
        printString(s);
        return;
    }else{
        if(openingCount > closingCount){
            s[pos] = '}';
            generateParentheses(pos+1, openingCount, closingCount+1, n);
        }
        if (openingCount < n){
            s[pos] = '{';
            generateParentheses(pos+1, openingCount+1, closingCount, n);
        }
    }
}

int main(){

    //std::vector<string> s;
    
    printParentheses(1);
    return 0;
}