#ifndef LISTA3EX5_H
#define LISTA3EX5_H

struct DadosCliente{
      char nome[40];
      long int cpf;
      double depInicial;
};
   
class lista3Ex5 {    
public:
    DadosCliente ListaCliente[3];
    
    void cadastro();
    void pesquisar(int procurarCPF);
    
    lista3Ex5();
    lista3Ex5(const lista3Ex5& orig);
    virtual ~lista3Ex5();
private:

};

#endif /* LISTA3EX5_H */

