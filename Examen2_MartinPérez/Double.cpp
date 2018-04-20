#include "Double.h"
#include <iostream>
#include <string>

using namespace std;



//Constructor2
Double::Double(){

}//Fin constructor sencillo

double Double::getNumero(){
    return numero;
}

void Double:: setNumero(double numero){

    this->numero=numero;

}


Double* Double:: operator+(Double& numerodouble){
    Double* aux= new Double();

    aux->setNumero(this->getNumero()+numerodouble.getNumero());

    return aux;
}



Double* Double:: operator-(Double& numerodouble){
    Double* aux= new Double();

    aux->setNumero(this->getNumero()-numerodouble.getNumero());

    return aux;
}

Double::~Double(){

    

}