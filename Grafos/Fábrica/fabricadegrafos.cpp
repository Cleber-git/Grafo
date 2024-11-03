#include "fabricadegrafos.h"

fabricaDeGrafos::fabricaDeGrafos()
{

}

AbstractGrafo* fabricaDeGrafos::createGrafo( Grafos _typeGrafos){
    switch (_typeGrafos) {
    case SIMPLES:
        return new Grafo(0);
        break;
    case NAO_DIRECIONADO:
        return new GrafoNDirecionado();
    case MULTIGRAFO:
        return new GrafoMultiGrafo(0);
    default:
        break;
    }

}
