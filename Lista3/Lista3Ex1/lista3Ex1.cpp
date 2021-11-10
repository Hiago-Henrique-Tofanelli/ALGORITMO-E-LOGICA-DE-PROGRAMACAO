#include "lista3Ex1.h"
#include <iostream>

using namespace std;

lista3Ex1::lista3Ex1() {
}

lista3Ex1::lista3Ex1(const lista3Ex1& orig) {
}

lista3Ex1::~lista3Ex1() {
}
void lista3Ex1::lerDados(){
    for (int i=0; i<=1; i++){
        cout << "Informe o nome do aluno: " << endl;
        cin >> this->ListaAlunos[i].nome;
        cout << "Informe a matrícula: " << endl;
        cin >> this->ListaAlunos[i].matAluno;
        cout << "Informe a primeira nota: "<< endl;
        cin >> this->ListaAlunos[i].nota1;
        cout << "Informe a segunda nota: "<< endl;
        cin >> this->ListaAlunos[i].nota2;
    }
}

void lista3Ex1::imprimeDados(){
    for (int i=0; i<=1; i++){
        cout << this->ListaAlunos[i].nome << endl;
        cout << this->ListaAlunos[i].matAluno << endl;
        cout << (this->ListaAlunos[i].nota1+this->ListaAlunos[i].nota2)/2 << endl << endl;
    }
}
