#include "exercicio_19.h"
#include <iostream>
using namespace std;
exercicio_19::exercicio_19() {
}

exercicio_19::exercicio_19(const exercicio_19& orig) {
}

exercicio_19::~exercicio_19() {
}
void exercicio_19::lerDados(){
    
    float n1 = 0.0, n2 = 0.0, n3 = 0.0;
    char tipoMedia;
    cout <<"Digite primeira nota"<<endl;
    cin>>n1;
    cout <<"Digite a segunda nota"<<endl;
    cin>>n2;
    cout <<"Digite a terceira nota"<<endl;
    cin>>n3;
    cout<<"Digite tipo de média que você deseja calcular(A, P ou H)"<<endl;
    cin>>tipoMedia;
    cout << this->calcMedia(n1, n2, n3, tipoMedia);
}
float exercicio_19::calcMedia(float n1, float n2, float n3, char tipoMedia){
    float media = 0.0;
    if ((tipoMedia == 'A') || (tipoMedia == 'a'))
        media = (n1+n2+n3)/3;
    
    if ((tipoMedia == 'P') || (tipoMedia == 'p'))
        media = ((n1*2)+(n2*3)+(n3*5))/10;
    
    if ((tipoMedia == 'H') || (tipoMedia == 'h'))
        media = 3/(1/n1 + 1/n2 +1/n3);
    return media;   
}
