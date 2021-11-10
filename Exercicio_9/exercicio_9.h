#ifndef EXERCICIO_9_H
#define EXERCICIO_9_H

class exercicio_9 {
public:
    exercicio_9();
    exercicio_9(const exercicio_9& orig);
    virtual ~exercicio_9();
    void lerDados ();
    float calcMedia(float n1, float n2, float n3);
    float aprovadoReprovado(float media);
private:

};

#endif /* EXERCICIO_9_H */

