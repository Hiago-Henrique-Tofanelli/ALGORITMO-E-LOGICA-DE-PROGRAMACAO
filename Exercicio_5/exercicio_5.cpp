#include "exercicio_5.h"
#include <iostream>
using namespace std;
exercicio_5::exercicio_5() {
}

exercicio_5::exercicio_5(const exercicio_5& orig) {
}

exercicio_5::~exercicio_5() {
}
void exercicio_5::lerDados(){

    float n1 = 0.0, n2 = 0.0, n3 = 0.0, media = 0.0;
    cout <<"Digite n1"<<endl;
    cin>>n1;
    cout <<"Digite n2"<<endl;
    cin>>n2;
    cout <<"Digite n3"<<endl;
    cin>>n3;
    cout << this->calcMedia(n1, n2, n3, media);
}
float exercicio_5::calcMedia(float n1, float n2, float n3, float media){
    media = ((n1*2)+(n2*3)+(n3*5))/10;
    cout<<"A média é:"; 
    return media; 
}
