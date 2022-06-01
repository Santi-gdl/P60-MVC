#include <iostream>
#include "vista.h"

using namespace std;

int main()
{
    cout << "**EJEMPLO MVC**" << endl;

    /*string nombre="Nubia";

    Estudiante e(nombre);
    e.setNota1(8);
    e.setNota2(3.5);
    e.setNota3(4);*/
    //cout << e.getDatos() << endl;

    /*Controlador c;
    cout << c.vizualizar() << endl;*/

    Vista v;
    v.imprimir();
    v.llamar();
    v.imprimir();

    return 0;
}
