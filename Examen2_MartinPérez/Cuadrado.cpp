#include "Cuadrado.h"
#include <iostream>
#include <string>

using namespace std;



//Constructor2
Cuadrado::Cuadrado(double lado){
    this->lado=lado;

}//Fin constructor sencillo

double Cuadrado:: getArea(){
    double area;

    area=lado*lado;


    return area;;
}

string Cuadrado:: toString(){



    return "Cuadrado";
}



