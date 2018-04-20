//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef FIGURA_H
#define FIGURA_H


//Inicio clase
class Figura{

    //Atributos
    private:
    //double area;

       


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Figura();
       

        //metodos accersores / mutadores
        virtual string toString()=0;
        virtual double getArea();
        

  


};//Fin de la clase


#endif