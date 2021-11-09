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
            s[pos] = "}";
            generateParentheses(pos+1, openingCount, closingCount+1, n);
        }
        if (openingCount < n){
            s[pos] = "{";
            generateParentheses(pos+1, openingCount+1, closingCount, n);
        }
    }
}


void MigueParen(int NumParen)
{
    if(NumParen < 0)
    {
        return;
    }
    else
    {
        /*
        n=1 ---> Z ()
        () Z
        n = 2
        CASO 1: ()() ---> B Z(0)Z(0)
        CASO 2: (()) ---> A Z(Z) 

        n = 3
        CASO 1: ()()() ---> B2 -->    ZZZ *
        CASO 2: (()()) ---> A(B) ---> Z(ZZ) *
        CASO 3: ((())) ---> A2 --->   Z(Z(Z)) *
        CASO 4: (())() ---> B(A_izq) --->Z(Z)Z 
        CASO 5: ()(()) ---> B(A_der) --->ZZ(Z)*

        //////////////////
        Z-->0
        Z-->Z

        /////////Linea 1
        Z-->0, Z-->0, z-->0 zzz
        /////////Linea 2
        Z-->0, Z-->z, zz(z)

                         z=0 z                           
                         / \                           
                        /   \                          
                      z=0   z=z z()               
                     /      /   \
                    /      /     \
                  z=0 zzz z(z)z  

                         z=z 
                         / \
                        /   \
                      z=0   z=z
                     z(zz)  z(z(z))


        */
        /*

            (
            |
            )
           N=2
                         (* 8 
                       /       \
                      /         \
                     (*           )8
                   /  \         /  \  
                  /    \       /    \  
                (        )*   (      )X
               / \      / \         /   \
              /   \    /   \       /     \
             (     )  (     )*     (        )


            Empiezas por el padre ( l_cnt++;
            while(lef_child_level < l_cnt)
                Revisas hijo izq ( l_cnt++);
            while(right_child_level < r_cnt)
                 Revisas hijo der ( r_cnt++);

            Empiezas por el padre ( l_cnt++);
            while(right_child_level < r_cnt)
                Revisas hijo der ( r_cnt++);
                if(closed)
                    goto parent


        */
    }

}

int main(){

    //std::vector<string> s;
    
    printParentheses(3);
    return 0;
}