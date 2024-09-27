#ifndef ABSTRACT_GRAFO_H
#define ABSTRACT_GRAFO_H

#include <QVector>

class AbstractGrafo
{
public:
    virtual void adicionarAresta(int _v1, int _v2) = 0;
    virtual void mostrarGrafo() = 0;
    virtual void resizeAdj(int _v) = 0;
    virtual bool ifExist(int _value, QVector<int> _vertice) = 0;
    virtual int getSizeAdjacencia() = 0;



};
#endif // ABSTRACT_GRAFO_H
