#ifndef FABRICADEGRAFOS_H
#define FABRICADEGRAFOS_H
#include "grafo.h"
#include "grafondirecionado.h"

class fabricaDeGrafos
{
public:
    enum Grafos{
        SIMPLES,
        NAO_DIRECIONADO
    };
    AbstractGrafo* createGrafo(Grafos _typeGrafo);
    fabricaDeGrafos();
};

#endif // FABRICADEGRAFOS_H
