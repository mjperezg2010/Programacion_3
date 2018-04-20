//Bienvenido
#include <string>
#include <iostream>
#include "Figura.h"

using namespace std;

#ifndef CUADRADO_H
#define CUADRADO_H


//Inicio clase
class Cuadrado: public Figura{

    //Atributos
    private:
    double lado;
      


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Cuadrado(double);
      

        //metodos accersores / mutadores

        string toString();
        double getArea();
       
        

    


};//Fin de la clase


#endif