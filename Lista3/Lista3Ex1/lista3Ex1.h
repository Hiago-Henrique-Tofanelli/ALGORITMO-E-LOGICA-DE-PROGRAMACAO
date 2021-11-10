#ifndef LISTA3EX1_H
#define LISTA3EX1_H


struct DadosAlunos{
    char nome[40];
    long int matAluno;
    float nota1, nota2;
};
class lista3Ex1 {
public:
    DadosAlunos ListaAlunos[2];
    
    lista3Ex1();
    lista3Ex1(const lista3Ex1& orig);
    virtual ~lista3Ex1();
    void lerDados();
    void imprimeDados();
private:

};

#endif /* LISTA3EX1_H */

