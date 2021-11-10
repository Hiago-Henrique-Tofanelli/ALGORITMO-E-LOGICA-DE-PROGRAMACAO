#include "exercicio_9.h"
#include <iostream>
#include <iomanip>
using namespace std;
exercicio_9::exercicio_9() {
}

exercicio_9::exercicio_9(const exercicio_9& orig) {
}

exercicio_9::~exercicio_9() {
}
void exercicio_9::lerDados(){
    
    float n1 = 0.0, n2 = 0.0, n3 = 0.0, media = 0.0;
    cout <<"Digite n1"<<endl;
    cin>>n1;
    cout <<"Digite n2"<<endl;
    cin>>n2;
    cout <<"Digite n3"<<endl;
    cin>>n3;
    //if(this->calcMedia(n1, n2, n3)>=6)
        //cout<<"APROVADO"<<endl<<endl;
    float mediaTemp=this->calcMedia(n1, n2, n3);
    this->aprovadoReprovado(mediaTemp);
    //cout<<this-> aprovadoReprovado(n1, n2, n3);
}
float exercicio_9::calcMedia(float n1, float n2, float n3){
    float media;
    media = (n1+n2+n3)/3; 
    
    return media;
}
float exercicio_9::aprovadoReprovado(float media){
    if(media>=6){
        cout<<"APROVADO"<<endl<<endl;
       
    }
    else{
        cout<<"REPROVADO"<<endl<<endl;
        
    }   
    cout<<"E a média final é:"<<media;
    return media;
}

