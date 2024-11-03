#ifndef FABRICADEGRAFOS_H
#define FABRICADEGRAFOS_H
#include "grafo.h"
#include "grafondirecionado.h"
#include "grafomultigrafo.h"

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
