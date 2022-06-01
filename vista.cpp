#include "vista.h"

Vista::Vista()
{
    this->control= new Controlador();
}

void Vista::imprimir()
{
    cout << this->control->vizualizar();
}

void Vista::actualizarNota()
{
    int nota =0;
    do{
        cout << "Ingrese la nota 1: ";
        cin >> nota;

    }while(nota < 0 || nota > 10);
    this->control->actualizarNota(1,nota);
}

void Vista::llamar()
{
 this->control->agreNota();
}
