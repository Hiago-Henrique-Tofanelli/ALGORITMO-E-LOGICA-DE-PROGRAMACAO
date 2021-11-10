#include "lista2Ex1.h"
#include <iostream>

using namespace std;

lista2Ex1::lista2Ex1() {
}

lista2Ex1::lista2Ex1(const lista2Ex1& orig) {
}

lista2Ex1::~lista2Ex1() {
}
void lista2Ex1::lerDados(){
    int n1, n2;
    cout<<"Digite um número"<<endl;
    cin>> n1;
    cout<<"Digite outro número"<<endl;
    cin>>n2;
    cout<<"O menor número é: "<<this->lerNum(n1, n2);
}
int lista2Ex1::lerNum(int n1, int n2){
    if(n1<n2){
        return n1;
    }
    else{
        return n2; 
    }   
}
