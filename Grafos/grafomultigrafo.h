#ifndef GRAFOMULTIGRAFO_H
#define GRAFOMULTIGRAFO_H

#include "Grafos/Abstract/abstract_grafo.h"

#include <QDebug>
#include <QTextEdit>

class GrafoMultiGrafo: public AbstractGrafo
{
public:
    GrafoMultiGrafo(int V);
    void mostrarGrafo(QTextEdit *_textEdit)override;
    void adicionarAresta(int _v1, int _v2)override;
    void showGrafo(QTextEdit *_textEdit);
    void resizeAdj(int _v)override;
    int getSizeAdjacencia()override{return adjacencias.size();}
    bool ifExist(int _value, QVector<int> _vertice)override;
private:
    int NumeroVertices;
    QVector<QVector<int>> adjacencias;
};

#endif // GRAFOMULTIGRAFO_H
