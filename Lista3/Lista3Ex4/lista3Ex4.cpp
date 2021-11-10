#include "lista3Ex4.h"
#include <iostream>

using namespace std;

lista3Ex4::lista3Ex4() {
}

lista3Ex4::lista3Ex4(const lista3Ex4& orig) {
}

lista3Ex4::~lista3Ex4() {
}
void lista3Ex4::cadastro(){
    
    for(int i=0; i<=5; i++){
        cout<<"Digite o nome de seu produto: "<<endl;
        cin>>this->ListaProdutos[i].nome;
        cout<<"Digite o código do produto: "<<endl;
        cin>>this->ListaProdutos[i].codigo;
        cout<<"Digite o preço do produto: "<<endl;
        cin>>this->ListaProdutos[i].preco;

    }
}
void lista3Ex4::consultaProdutos(){
    int procurarCod=0;
    for(int i=0; i<=5; i++){
        cout<<"O nome de seu produto é: "<<ListaProdutos[i].nome<<endl;    
        cout<<"O código do produto é: "<<ListaProdutos[i].codigo<<endl;            
    }  
        cout<<"Informe um código de um produto para ver seu preço"<<endl;
        cin>> procurarCod;
        this->pesquisar(procurarCod);
}
void lista3Ex4::pesquisar(int procurarCod){
    for(int i=0; i<=5; i++){
        if(procurarCod==this->ListaProdutos[i].codigo){
            cout<<"O preço do produto é: "<<ListaProdutos[i].preco<<endl;  
        }
    }
}

