//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef DOUBLE_H
#define DOUBLE_H


//Inicio clase
class Double{

    //Atributos
    private:
        double numero;
       


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Double();
        

        //metodos accersores / mutadores
        double getNumero();
        void setNumero(double);
        Double* operator+(Double&);
        Double* operator-(Double&);
       

    //Destructor
    ~Double();


};//Fin de la clase


#endif