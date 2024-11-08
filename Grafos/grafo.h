#ifndef GRAFO_H
#define GRAFO_H
#include "Grafos/Abstract/abstract_grafo.h"

#include <QVector>
#include <QTextEdit>

// Grafo simples
// Classe que herda a classe abstrata de grafo para a criação de grafo simples não direcionado

class Grafo : public AbstractGrafo
{
public:
    Grafo(int V);
    void mostrarGrafo(QTextEdit* _textEdit)override;
    void adicionarAresta(int _v1, int _v2)override;
    void showGrafo(QTextEdit *_textEdit);
    void resizeAdj(int _v)override;
    int getSizeAdjacencia()override{return adjacencias.size();}
    bool ifExist(int _value, QVector<int> _vertice) override;

    bool ifExist(int _value, int _vertice);

private:
    int NumeroVertices;
    QVector<int> adjacencias;

};

#endif // GRAFO_H
