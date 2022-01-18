#include <iostream>
#include <vector>
#include <unordered_map> 
#include <string>
using namespace std;

string destCity(vector<vector<string>>& paths) {
    unordered_map<string, int> outdegree;
    for(auto x: paths){
        outdegree[x[0]]++;
    }
    for(auto x: paths)
        if(outdegree[x[0]] == 0)
            return x[0];
        else if(outdegree[x[1]] == 0)
            return x[1];
    return paths[0][0];
}
int main(){
    vector<vector<string>> paths = {{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};
    string output = destCity(paths);
    cout<<output;
}