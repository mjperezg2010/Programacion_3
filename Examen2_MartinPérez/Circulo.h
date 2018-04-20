//Bienvenido
#include <string>
#include <iostream>
#include "Figura.h"

using namespace std;

#ifndef CIRCULO_H
#define CIRCULO_H




//Inicio clase
class Circulo: public Figura{

    //Atributos
    private:
    double radio;
       


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Circulo(double);

        //metodos accersores / mutadores
        string toString();
        double getArea();
       

    


};//Fin de la clase


#endif