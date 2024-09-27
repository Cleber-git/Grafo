#ifndef GRAFO_H
#define GRAFO_H
#include <QVector>
#include <QTextEdit>

class Grafo
{
public:
    Grafo(int V);
    void adicionarAresta(int v1, int v2);
    void showGrafo(QTextEdit *_textEdit );
    void resizeAdj(int V);
    int getAdjacencia(){return adjacencias.size();};
private:
    int NumeroVertices;
    QVector<QVector<int>> adjacencias;

};

#endif // GRAFO_H
