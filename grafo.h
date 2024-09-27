#ifndef GRAFO_H
#define GRAFO_H
#include "abstract_grafo.h"

#include <QVector>
#include <QTextEdit>
// Grafo simples
class Grafo : public AbstractGrafo
{
public:
    Grafo(int V);
    void mostrarGrafo()override;
    void adicionarAresta(int _v1, int _v2)override;
    void showGrafo(QTextEdit *_textEdit);
    void resizeAdj(int _v)override;
    int getSizeAdjacencia()override{return adjacencias.size();}
    bool ifExist(int _value, QVector<int> _vertice)override;

private:
    int NumeroVertices;
    QVector<QVector<int>> adjacencias;

};

#endif // GRAFO_H
