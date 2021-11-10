#ifndef LISTA3EX4_H
#define LISTA3EX4_H

struct DadosProduto{
      char nome[40];
      int codigo;
      double preco;    
};
    
class lista3Ex4 {
public:
    DadosProduto ListaProdutos[6];
    
    void cadastro();
    void consultaProdutos();
    void pesquisar(int procurarCod);
    
    lista3Ex4();
    lista3Ex4(const lista3Ex4& orig);
    virtual ~lista3Ex4();
private:

};

#endif /* LISTA3EX4_H */

