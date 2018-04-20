//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef POTENCIA_H
#define POTENCIA_H


//Inicio clase
class Potencia{

    //Atributos
    private:
        int A;
        int B;
        void funcionPotencia(int,int);
        int total;


    //metodos publicos
    public:
        
        //prototipos de metodos
        //constructor
        Potencia();
        Potencia(int,int);

        int pow();
        //metodos accersores / mutadores
        int getA();
        void setA(int);
        int getB();
        void setB(int);

    //Destructor
    ~Potencia();


};//Fin de la clase


#endif
