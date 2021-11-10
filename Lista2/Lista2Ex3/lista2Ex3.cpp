#include "lista2Ex3.h"
#include <iostream>]

using namespace std;

lista2Ex3::lista2Ex3() {
}

lista2Ex3::lista2Ex3(const lista2Ex3& orig) {
}

lista2Ex3::~lista2Ex3() {
}
void lista2Ex3::lerDados(){
    int num=0;
    cout<<"Informe um número para receber um retorno"<<endl;
    cin>>num;
    cout<<this->verNum(num);
}
int lista2Ex3::verNum(int num){
    if(num<0){
        return -1;
    }
    else if(num>0){
        return 1;
    }
    else if(num==0){
        return 0;
    }
    
}

