#ifndef VISTA_H
#define VISTA_H
#include "controlador.h"
#include <iostream>

class Vista
{
private:
    Controlador *control;

public:
    Vista();
    void imprimir();
    void actualizarNota();
    void llamar();

};

#endif // VISTA_H
