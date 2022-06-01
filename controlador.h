#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "estudiante.h"

class Controlador
{
private:
    Estudiante *modelo;
    void cargarInformacion();
    float promedio();
public:
    Controlador();
    string vizualizar();
    void actualizarNota(int nota, float valor);
   void agreNota();
};

#endif // CONTROLADOR_H
