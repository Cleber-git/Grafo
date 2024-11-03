#include "grafo.h"
#include <QDebug>

Grafo::Grafo(int V): NumeroVertices(V), adjacencias(V) {

}
void Grafo::adicionarAresta(int v1, int v2){

      adjacencias[v1] = v2;
}

void Grafo::resizeAdj(int V){
    adjacencias.resize(V);
}

bool Grafo::ifExist(int _value, int _vertice){
    return false;
}
void Grafo::mostrarGrafo(QTextEdit *_textEdit){
        QString text = "";
        for (int i = 0; i < adjacencias.size(); i++) {
            text += "Vértice ";
                text += QString::number(i);
            if(i >= 10){
                text += " ||  ";
            }else{
                text += "   ||  ";
            }
            // Como é um grafo simples não vai precisar de laço para imprimir as adjacências,
            // pois em grafos simples só existe uma aresta para cada vértice
            text += QString::number(adjacencias[i]);
            text += "\n";
        }
        _textEdit->setText(text);
}
bool Grafo::ifExist(int _value, QVector<int> _vertice){

}

