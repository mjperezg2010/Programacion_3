//Main
#include <iostream>
#include <string>
#include "Figura.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <fstream>
#include <stdlib.h>
#include "Double.h"
#include <vector>

using namespace std;

//Prototipos
int menu();
void ejercicio1();
void guardarFiguras(Figura**);
void ejercicio2();
void ejercicio3();

int main(){
    
    
    //Respuesta de usuario
    char resp='s';
    do{
        //INicio del switch
        switch(menu()){
            
            case 1:
            ejercicio1();

                break;
            case 2:
                
                ejercicio2();

                break;
            case 3:
                ejercicio3();

                break;
            default:

                break;


        }//Fin switch


        cout<<"Desea continuar?[s/n]: ";
        cin>>resp;
    }while(resp=='s');

    return 0;
}

//Menu

int menu(){
    int opcion;

    cout<<"--Menu--"<<endl;
    cout<<"1. Ejercicio 1"<<endl;
    cout<<"2. Ejercicio 2"<<endl;
    cout<<"3. Ejercicio 3"<<endl;
    cout<<"Ingrese una opcion: ";
    cin>>opcion;


    return opcion;

}

//Ejercicio 1
//Inicio del ejercicio 1

void ejercicio1(){
    //Declarar el arreglo de figuras
    Figura** arreglo = new Figura*[10];
    int cont=0;
    
    //Creacion de las figuras
    for(int i=0; i<10;i++){
        if(cont%2==0){
            cout<<"\nIngrese el radio del circulo: ";
            double radio;
            //Meter valores
            cin>>radio;
            Figura* circulo= new Circulo(radio);
            arreglo[i]=circulo;

            


        }else{
            
            cout<<"\nIngrese un lado del cuadrado: ";
            //Meter valores
            double lado;
            cin>>lado;
            Figura* cuadrado= new Cuadrado(lado);
            arreglo[i]=cuadrado;


        }

        cont++;



    }//Fin for

    //Funcion para guardar las figuras
    guardarFiguras(arreglo);


    for(int i=0;i<10;i++){
        delete arreglo[i];

    }

    delete[] arreglo;



}//Fin ejercicio1


void guardarFiguras(Figura** arreglo){

    ofstream archivo;
    
    archivo.open("FigurasArchivo.txt",ios::out);//Abrir archivo


	if(archivo.fail()){  ///Error al abrie el archivo
		cout<<"No se pudo abrir el archivo";
		exit(1);
		
	}

    for(int i=0;i<10;i++){
       

        archivo<<"  El "<<arreglo[i]->toString()<<" tiene un area de: "<<arreglo[i]->getArea()<<endl;
    }
	
	
	
	archivo.close();//Cerrar el archivo

    




}

void ejercicio2(){
    
    //Primer numero
    Double* numero1= new Double();
    //Segundo numero
    Double* numero2=new Double();
    //El resultado
    Double* resultado= new Double();

    cout<<"\nIngrese el primer numero: ";
    double num1;
    cin>>num1;
    numero1->setNumero(num1);

    cout<<"\nIngrese el segundo numero: ";
    double num2;
    cin>>num2;
    numero2->setNumero(num2);

    resultado=*numero1+*numero2;

    cout<<"La suma es: "<<resultado->getNumero()<<endl;

    resultado=*numero1-*numero2;

    cout<<"La resta es: "<<resultado->getNumero()<<endl;


    delete numero1;
    delete numero2;
    delete resultado;






}

void ejercicio3(){

    


    //abrir archivo
   ifstream archivo ("FigurasArchivo.txt");
   vector<string> lista;

   
    //mientras hay lineas en el archivo
    if(archivo.is_open()){
        while(!archivo.eof()){
            //Leer una linea
            string line;
            getline(archivo,line);
            if(line=="."){
                break;
            }
            //meter a lista 
            lista.push_back(line);



           

        }

        //cerrar al archivo}
        archivo.close();

    }



    for(int i=0;i<lista.size();i++){
        cout<<lista[i]<<endl;


    }



}
