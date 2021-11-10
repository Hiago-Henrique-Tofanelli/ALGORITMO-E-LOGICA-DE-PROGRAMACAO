#ifndef LISTA3EX2_H
#define LISTA3EX2_H

class lista3Ex2 {
public:
    struct pessoas{
        char nome[40], sexo;
        float altura, peso;
        int cpf;
    }vetPessoas[6];
    lista3Ex2();
    lista3Ex2(const lista3Ex2& orig);
    virtual ~lista3Ex2();
    void lerDados();
    float localizaCalcIMC(int cpfBusca, int contador);
private:

};

#endif /* LISTA3EX2_H */

