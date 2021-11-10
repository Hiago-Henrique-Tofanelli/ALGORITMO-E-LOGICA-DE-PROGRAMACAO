#include "lista2Ex5.h"
#include <iostream>
#include <math.h>

using namespace std;

lista2Ex5::lista2Ex5() {
}

lista2Ex5::lista2Ex5(const lista2Ex5& orig) {
}

lista2Ex5::~lista2Ex5() {
}
void lista2Ex5::lerDados(){
    float r=0,pi=3.14159,v=0;
    cout<<"Informe um valor para 'R' para realizar o calculo do volume de uma esfera "<<endl;
    cin>>r;
    cout<<this->calcVolume(r, pi, v);   
}
double lista2Ex5::calcVolume(double r, double pi, double v){
    r= pow(r,3);
    v=4*pi*r/3;
    return v;        
}

