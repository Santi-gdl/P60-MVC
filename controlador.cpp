#include "controlador.h"

void Controlador::cargarInformacion()
{
    string nombre ="Lionel Messi";
    this->modelo = new Estudiante(nombre);
    this->modelo->setNota1(5);
    this->modelo->setNota2(7);
    this->modelo->setNota3(9);
}

float Controlador::promedio()
{
    float p=(modelo->getNota1() + modelo->getNota2() + modelo->getNota3()) / 3;
    return p;
}

Controlador::Controlador()
{
    this->cargarInformacion();
}

string Controlador::vizualizar()
{
    string str = this->modelo->getDatos() + "Promedio: "
            + to_string(this->promedio()) + "\n\n";

    return str;
}

void Controlador::actualizarNota(int nota, float valor)
{
    switch (nota) {
    case 1:
        modelo->setNota1(valor);
        break;
    case 2:
        modelo->setNota2(valor);
        break;
    case 3:
        modelo->setNota3(valor);
        break;
    default:
        break;
    }
}

void Controlador::agreNota()
{
    int bandera;
    float valor;
    if(modelo->getNota1() < modelo->getNota2() && modelo->getNota1() < modelo->getNota3()){
        bandera=1;
        }else{
            if(modelo->getNota2() < modelo->getNota1() && modelo->getNota2()< modelo->getNota3()){
        bandera=2;
            }else{
        bandera=3;
            }
        }
    if (bandera==1){
        valor=modelo->getNota1();
    }
    if (bandera==2){
        valor=modelo->getNota2();
    }
    if (bandera==3){
        valor=modelo->getNota3();
    }
    actualizarNota(bandera, valor+1);
}
