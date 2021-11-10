#include "exercicio_13.h"
#include <iostream>
using namespace std;
exercicio_13::exercicio_13() {
}

exercicio_13::exercicio_13(const exercicio_13& orig) {
}

exercicio_13::~exercicio_13() {
}
void exercicio_13::lerDados(){
    
    int n1=0, n2=0, n3=0, maior=0;
    cout<<"Informe o primeiro número"<<endl;
    cin>> n1;        
    cout<<"Informe o segundo número"<<endl;
    cin>> n2;       
    cout<<"Informe o terceiro número"<<endl;
    cin>> n3;  
    cout<< this->maiorNum(n1, n2, n3, maior);
}
int exercicio_13::maiorNum(int n1, int n2, int n3, int maior){
    if((n1>n2) && (n1>n3)){
        cout << "O maior número é\n"<<endl;
        return n1;
    }
    else if((n2>n1) && (n2>n3)){
        cout<< "O maior número é\n"<<endl;
        return n2;
    }
    else if((n3>n1) && (n3>n2)){
        cout<< "O maior número é\n"<<endl;
        return n3;
     }  
}

