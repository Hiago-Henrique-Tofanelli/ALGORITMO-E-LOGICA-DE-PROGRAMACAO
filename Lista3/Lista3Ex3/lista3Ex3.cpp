#include "lista3Ex3.h"
#include <iostream>

using namespace std;

lista3Ex3::lista3Ex3() {
}

lista3Ex3::lista3Ex3(const lista3Ex3& orig) {
}

lista3Ex3::~lista3Ex3() {
}
void lista3Ex3::cadastro(){
    int i=0;
    char opc;
    
    
    do{
        cout<<"Informe seu nome: \n";
        cin>>this->pessoas[i].nome;
        cout<<"Informe a sua altura: \n";
        cin>>this->pessoas[i].altura;
        cout<<"Informe o seu peso: \n";
        cin>>this->pessoas[i].peso;
        cout<<"Informe seu CPF: \n";
        cin>>this->pessoas[i].cpf;
        cout<<"Informe seu sexo: \n";
        cin>>this->pessoas[i].sexo;
        cout<<"Você quer continuar o cadastro ?(DIGITE 'S'PARA CONTINUAR): \n";
        cin>>opc;
    i++;  
    }while((opc == 's' || opc == 'S') && (i<3));
    
    this->ordBolha(i);
    
    long int cpfB;
    cout<<"Informe um CPF para buscar:\n";
    cin>>cpfB;
    if((this->pesquisaBinaria(i, cpfB))!=-1){
        cout<< "CPF encontrado!";
    }
    else
        cout<<"CPF inexistente!";
}
void lista3Ex3::pesquisaSequencial(int i, long int cpfB){

    for(int c=0; c<i; c++){
        if (cpfB == this->pessoas[c].cpf)
            cout<<"CPF encontrado!";
    }
}
int lista3Ex3::pesquisaBinaria(int i, long int cpfB){
    int inferior, superior, meio;
    inferior = 0;
    superior = i-1;
    while (inferior <= superior){
        meio = ((inferior + superior)/2);
        if (cpfB == this->pessoas[meio].cpf)
            return meio;
        else if(cpfB < this->pessoas[meio].cpf)
            superior = meio - 1;
        else 
            inferior = meio + 1;
    }
    return -1;
}


void lista3Ex3::ordBolha(int i){
    int cont, j;
    int t;
    for (cont = i-1; cont>=1; cont--){
        for (j = 0; j < cont; j++){
            if (this->pessoas[j].cpf > this->pessoas[j+1].cpf){
                t = this->pessoas[j].cpf;
                this->pessoas[j] = this->pessoas[j+1];
                this->pessoas[j+1] = t;
            }
        }
    }
}   

