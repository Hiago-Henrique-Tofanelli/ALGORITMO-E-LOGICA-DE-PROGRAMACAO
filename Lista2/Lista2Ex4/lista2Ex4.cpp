#include "lista2Ex4.h"
#include <iostream>
#include <math.h>

using namespace std;

lista2Ex4::lista2Ex4() {
}

lista2Ex4::lista2Ex4(const lista2Ex4& orig) {
}

lista2Ex4::~lista2Ex4() {
}
void lista2Ex4::lerDados(){
    double b, a, c;
    cout<<"Informe o valor de b para calcular o Δ"<<endl;
    cin>> b;
    cout<<"Informe o valor de a para calcular o Δ"<<endl;
    cin>> a;
    cout<<"Informe o valor de c para calcular o Δ"<<endl;
    cin>> c;
    cout<<this->calcDelta(b, a, c);
}
double lista2Ex4::calcDelta(double b, double a, double c){
    double Δ;
    b= pow(b,2);
    Δ=b-4*a*c;
    return Δ;   
}
