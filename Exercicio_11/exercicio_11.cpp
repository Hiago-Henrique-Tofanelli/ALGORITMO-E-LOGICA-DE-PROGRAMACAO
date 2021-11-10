#include "exercicio_11.h"
#include<iostream>
#include <stdio.h>
using namespace std;
exercicio_11::exercicio_11() {
}

exercicio_11::exercicio_11(const exercicio_11& orig) {
}

exercicio_11::~exercicio_11() {
}
void exercicio_11::lerDados(){
    int n1=0, n2=0;
    cout<<"Digite o primeiro número"<<endl;
    cin>>n1;
    cout<<"Digite o segundo número"<<endl;
    cin>>n2;
    this->lerMultiplos(n1,n2);   
}
int exercicio_11::lerMultiplos(int n1, int n2){
    if((n1%n2==0) || (n2%n1==0)){
    cout<<"Os números são multiplos";  
}
    else{
    cout<<"Os números não são multiplos";
    }    
}


