#include "grafo.h"
#include <QDebug>

Grafo::Grafo(int V): NumeroVertices(V), adjacencias(V) {

}
void Grafo::adicionarAresta(int v1, int v2){

    if(!ifExist(v2,adjacencias[v1] )){
        adjacencias[v1].push_back(v2);
    }
    if(!ifExist(v1, adjacencias[v2])){
        adjacencias[v2].push_back(v1);
    }
}

void Grafo::showGrafo(QTextEdit *_textEdit){
    QString text = "";
    for (int i = 0; i < adjacencias.size(); i++) {

        text += "Vértice ";
        text += QString::number(i);
        if(i >= 10){
            text += " ||  ";
        }else{
            text += "   ||  ";
        }
        for(int ii : adjacencias[i]){
            text += " ";

            text += QString::number(ii);

        }
        text += "\n";
    }
    _textEdit->setText(text);
}

void Grafo::resizeAdj(int V){
    adjacencias.resize(V);
}

bool Grafo::ifExist(int _value, QVector<int> _vertice){
    for(int i : _vertice){
        if(_value == i){
            return true;
        }
    }
    return false;
}
void Grafo::mostrarGrafo(){}
