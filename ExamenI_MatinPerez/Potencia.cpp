//Metodo sets ade gets

#include "Potencia.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Potencia::Potencia(int A,int B){
    this->A=A;
    this->B=B;
}//Fin constructor

//Constructor2
Potencia::Potencia(){
	this->total=1;
}//Fin constructor sencillo

int Potencia::getA(){
    return A;
}

void Potencia:: setA(int A){

    this->A=A;

}

int Potencia::getB(){
    return B;
}

void Potencia:: setB(int B){

    this->B=B;

}


//Metodo recursivo
//void funcionPotencia();
void Potencia:: funcionPotencia(int A,int B){
    		
    if(B==0){
	 
    }else{
	total=total*A;
	funcionPotencia(A,B-1);
	



    }
    
    
    
    
}//Fin recursivo


int Potencia:: pow(){
	funcionPotencia(A,B);
	return total;


}









Potencia::~Potencia(){

    cout<<"La instancia de Potencia fue eliminada";

}
