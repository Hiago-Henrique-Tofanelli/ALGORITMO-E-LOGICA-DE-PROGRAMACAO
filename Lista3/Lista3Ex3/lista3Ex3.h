#ifndef LISTA3EX3_H
#define LISTA3EX3_H

class lista3Ex3 {
public:
    
    
    struct cadPessoas{
        char nome[50], sexo[50];
        float peso, altura;
        long int cpf;
        }pessoas[3];
    lista3Ex3();
    lista3Ex3(const lista3Ex3& orig);
    virtual ~lista3Ex3();
    
    void cadastro();
    void pesquisaSequencial (int i, long int cpfB);
    int pesquisaBinaria(int i, long int cpfB);
    void ordBolha(int i);
private:

};

#endif /* LISTA3EX3_H */

