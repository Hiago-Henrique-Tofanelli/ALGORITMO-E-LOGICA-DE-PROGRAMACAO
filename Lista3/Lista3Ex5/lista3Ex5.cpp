#include "lista3Ex5.h"
#include <iostream>

using namespace std;

lista3Ex5::lista3Ex5() {
}

lista3Ex5::lista3Ex5(const lista3Ex5& orig) {
}

lista3Ex5::~lista3Ex5() {
}
void lista3Ex5::cadastro(){
    int procurarCPF;
    for(int i=0; i<=2; i++){
        cout<<"Digite seu nome para realizar o cadastro de sua conta: "<<endl;
        cin>>this->ListaCliente[i].nome;
        cout<<"Digite o seu CPF: "<<endl;
        cin>>this->ListaCliente[i].cpf;
        cout<<"Para terminar você terá que realizar um depósito: "<<endl<< "Informe o valor que será depositado:";
        cin>>this->ListaCliente[i].depInicial;

    }  
    cout<<"Informe o seu CPF para realizar operações em sua conta"<<endl;
    cin>> procurarCPF;
    this->pesquisar(procurarCPF);
}

void lista3Ex5::pesquisar(int procurarCPF){  
    int operacao;
    double saldoFinal, saque, deposito;
        for(int i=0; i<=2; i++){
            if(procurarCPF==this->ListaCliente[i].cpf){                
            cout<<"Escolha a operação que você deseja realizar digitando 1 para realizar saque e 2 para realizar um depósito:";
            cin>>operacao;
            if(operacao==1){
                cout<<"informe o valor que você deseja sacar: ";
                cin>>saque;
                saldoFinal = this->ListaCliente[i].depInicial - saque;
                cout<<"O seu nome é: "<<this->ListaCliente[i].nome<< "E seu saldo final é:" <<saldoFinal<<endl;
            }
            else if(operacao==2){
                cout<<"informe o valor que você deseja depositar: ";
                cin>>deposito;
                saldoFinal = this->ListaCliente[i].depInicial+ deposito;
                cout<<"O seu nome é: "<<this->ListaCliente[i].nome<< " e seu saldo final é:" <<saldoFinal<<endl;
            }
            else 
                cout<<"CPF não encontrado!";
            }
        } 
            
    
}        



