#ifndef FABRICADEGRAFOS_H
#define FABRICADEGRAFOS_H
#include "Grafos/grafo.h"
#include "Grafos/grafondirecionado.h"
#include "Grafos/grafomultigrafo.h"

class fabricaDeGrafos
{
public:
    enum Grafos{
        SIMPLES,
        NAO_DIRECIONADO,
        MULTIGRAFO
    };
    AbstractGrafo* createGrafo(Grafos _typeGrafo);
    fabricaDeGrafos();
};

#endif // FABRICADEGRAFOS_H
