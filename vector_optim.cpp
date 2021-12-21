#include <iostream>
#include <string>
#include <vector>

struct Vertex{
    float x,y,z;
    Vertex(float x, float y, float z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    Vertex(const Vertex& Vertex){
        this->x=Vertex.x;
        this->y=Vertex.y;
        this->z=Vertex.z;
        std::cout << "test" <<std::endl;
    }
};

void function(Vertex v){
    v.x++;
    std::cout<<v.x<<std::endl;
    return;
}

int main(int argc, char const *argv[]){
    //Vertex v1(1,2,3);
    //std::cout <<v1.x<<std::endl;
    //function(v1);
   
   std::vector<Vertex> vertices;
   vertices.reserve(3);
   vertices.emplace_back(1,2,3);
   vertices.push_back({1,2,3});
    return 0;
}