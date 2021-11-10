#include "lista2Ex6.h"
#include <iostream>

using namespace std;

lista2Ex6::lista2Ex6() {
}

lista2Ex6::lista2Ex6(const lista2Ex6& orig) {
}

lista2Ex6::~lista2Ex6() {
}
void lista2Ex6::lerDados(){
    float x, y, z;
    cout<<"Digite o comprimeto do lado X"<<endl;
    cin>>x;
    cout<<"Digite o comprimeto do lado Y"<<endl;
    cin>>y;
    cout<<"Digite o comprimeto do lado Z"<<endl;
    cin>>z;
    this->tipoTriangulo(x, y, z);   
}
void lista2Ex6::tipoTriangulo(float x, float y, float z){
    if((x<y+z)&&(y<x+z)&&(z<x+y)){
        if((x==y)&&(x==z)){
            cout<<"Triângulo Equilátero";
        }
            else if((x==y)||(x==z)||(z==x)||(z==y)||(y==x)||(y==z)){
                cout<<"Triângulo Isósceles";
            }
                else if((x=!y) && (x=!z) || (y=!x) && (y=!z)||(z=!x) && (z=!y)) {
                    cout<<"Triângulo Escaleno";
                    }
        }  
    else{
        cout<<"Os comprimentos de lados informados não podem formar um triângulo!";
    }
}

