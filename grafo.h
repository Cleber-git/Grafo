#ifndef GRAFO_H
#define GRAFO_H
#include <QVector>
#include <QTextEdit>

#include "abstract_grafo.h"

// Grafo simples
class Grafo : AbstractGrafo
{
public:
    Grafo(int V);

    void adicionarAresta(int _v1, int _v2)override;
    void showGrafo(QTextEdit *_textEdit );
    void resizeAdj(int _v)override;
    int getAdjacencia()override{return adjacencias.size();};
    bool isExist(int _value, QVector<int> _vertice)override;
private:
    int NumeroVertices;
    QVector<QVector<int>> adjacencias;

};

#endif // GRAFO_H
