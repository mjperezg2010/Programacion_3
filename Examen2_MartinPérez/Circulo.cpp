#include "Circulo.h"
#include <iostream>
#include <string>

using namespace std;

#define PI 3.14159265


Circulo::Circulo(double radio){
   
    this->radio=radio;
}//Fin constructor




double Circulo:: getArea(){



    return PI*radio*radio;
}

string Circulo:: toString(){


    return "Circulo";
}


