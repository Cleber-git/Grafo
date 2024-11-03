#ifndef GRAFONDIRECIONADO_H
#define GRAFONDIRECIONADO_H
#include "abstract_grafo.h"
#include <QVector>
#include <QDebug>


class GrafoNDirecionado: public AbstractGrafo
{
public:
     GrafoNDirecionado();
     void adicionarAresta(int _v1, int _v2)override;
     void mostrarGrafo(QTextEdit *_textEdit)override;
     void resizeAdj(int _v) override;
     bool ifExist(int _value, QVector<int> _vertice) override;
      int getSizeAdjacencia() override;
};

#endif // GRAFONDIRECIONADO_H
