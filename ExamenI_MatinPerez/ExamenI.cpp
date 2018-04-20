#include <iostream>
#include <string>
#include "Potencia.h"

using namespace std;

int menu();

//
void funcionArreglo();

int main() {
	char res='s';
	int num1,num2;
    Potencia* potencia = new Potencia();
	
	
	
	do{
        switch(menu()){
            case 1:
                
                cout<<"Ingrese el primer numero: ";
                cin>>num1;
                cout<<"INgrese el segundo numero: ";
                cin>>num2;
		potencia->setA(num1);
		potencia->setB(num2);
                break;
            case 2:
                cout<<"El resultado es: "<<potencia->pow()<<endl;
                
                break;
            case 3:
                funcionArreglo();
                break;
            case 4:
                res='n';
                break;
            default:
                cout<<"Esta opcion no existe"<<endl;
                break;
            
            
            
            
            
        }//FIn switch
        
	cout<<endl;        
        
        
        
        
        
        
        
    }while(res=='s');
    
    delete potencia;
    cout<<endl;


    return 0;
}//FIn del main



int menu(){
    int opcion;
    cout<<"--Menu--"<<endl;
    cout<<"1. Ingrese dos numeros"<<endl;
    cout<<"2. Calcular Potencia"<<endl;
    cout<<"3. Ejecutar ejercicio arreglo"<<endl;
    cout<<"4. salir"<<endl;
    cout<<"Ingrese una opcion: ";
    cin>>opcion;
    
    
    return opcion;
}



void funcionArreglo(){
    int size;
    
    cout<<"Ingrese el tamaño de arreglo: ";
    cin>>size;
    
    int* arreglo = new int[size];
    
    for(int i=0;i<size;i++){
            cout<<"Ingrese elemnto del arreglo: ";
            cin>>arreglo[i];
        
        
        
    }
    
    cout<<"\nLos elementos del arreglo son: "<<endl;
    
    for(int i=0;i<size;i++){
            
            cout<<arreglo[i]<<",";
        
        
        
    }
    cout<<endl;
    delete[] arreglo;
    arreglo=NULL;
    
    
    
    
}//Fin funcion arreglo








///////




	
























