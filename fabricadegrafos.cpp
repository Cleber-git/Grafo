#include "fabricadegrafos.h"

fabricaDeGrafos::fabricaDeGrafos()
{

}

AbstractGrafo* fabricaDeGrafos::createGrafo( Grafos _typeGrafos){
    switch (_typeGrafos) {
    case SIMPLES:
        return new Grafo(5);
        break;
    case NAO_DIRECIONADO:
        return new GrafoNDirecionado();
    default:
        break;
    }

}
