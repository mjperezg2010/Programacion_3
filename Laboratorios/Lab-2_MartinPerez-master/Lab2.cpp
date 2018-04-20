#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int menu();
void ejercicio1();
void ejercicio2();
void ejercicio3();
void angulo(double,double,double);
int factorial(int);
#define PI 3.14159265

int main(){
	char res='s';
	do{
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
				cout<<"Opcion invalida"<<endl;
				break;
		
		
		
		}//Fin switch






		cout<<"\n Desea continuar?(s/n)"<<endl;
		cin>>res;
	}while(res=='s' || res=='S');



	return 0;
}//Fin del main


int menu(){
	int opcion=0;
	cout<<"--Menu--"<<endl;
	cout<<"1. Numero triangular "<<endl<<"2.triangulo "<<endl<<"3. Numeros Catalan"<<endl<<"Ingrese una opcion: ";
	cin>>opcion;

	return opcion;

}


void ejercicio1(){

	int numero=0;
	cout<<"Identificar si es triangular\n"<<endl;
	cout<< "Ingrese un numero para saber si es triangular: ";
	cin>>numero;
	

	int ntriangular=0;


	int n=0;
	bool triangular=true;

	while(ntriangular<numero){
		
		ntriangular=( n*(n+1))/2;
		if(numero==ntriangular){
			triangular=true;
			break;
		}else{
			triangular=false;	
		
		}

		n++;
		


	}//Fin while
	
	if(triangular)
		cout<<"El numero "<<numero<<" es triangular"<<endl;
	else
		cout<<"El numero "<<numero<<" no es triangular"<<endl;
///////////////////
	cout<<"\nIdentificar si un numero aleatorio es triangualar"<<endl;
	int aleatorio= rand() % 100 + 1;
	cout<<"\nEl numero aleatorio es: "<<aleatorio<<endl; 

	ntriangular=0;
	n=0;
	triangular=true;
	while(ntriangular<aleatorio){
		ntriangular= (n*(n+1))/2;
		if(aleatorio==ntriangular){
			triangular=true;
			break;
			
		}else{
			triangular=false;	
		}
		n++;
	}//FIn while
	
	if(triangular)
		cout<<"El numero "<<aleatorio<< " es triangular"<<endl;
	else
		cout<<"El numero "<<aleatorio<<" no es triangular"<<endl;

//////////////////////////7
	cout<<"\nNumero triangular previo\n"<<endl;
	cout<<"\nIngrese un numero: ";
	cin>>numero;

	ntriangular=0;
	n=0;

	while(ntriangular<numero){
		ntriangular=(n*(n+1))/2;
		n++;	
	}
	n=n-2;	
	ntriangular=(n*(n+1))/2;


	cout<<"\nEl numero triangualar previo es: "<<ntriangular;






}//Fin metodo ejercicio 1















void ejercicio2(){
	
	double lado1=0.0,lado2=0.0,lado3=0.0;
	cout<<"Ingrese el lado 1: ";
	cin>>lado1;
	cout<<"Ingrese el lado 2: ";
	cin>>lado2;
	cout<<"Ingrese el lado3; ";
	cin>>lado3;

	bool rectangulo=true;

	if(lado1*lado1==lado2*lado2 + lado3*lado3){

		rectangulo=true;
	}else{
		rectangulo=false;
	}
	if(lado2*lado2==lado1*lado1 + lado3*lado3){
		rectangulo=true;
	}else{
		rectangulo=false;
	}
	if(lado3*lado3== lado1*lado1+ lado2*lado2){
		rectangulo=true;
	}else{
		rectangulo=false;
	}

	if(rectangulo){
		cout<<"Es un triangulo rectangulo";
		cout<<"\nAngulos"<<endl;
		angulo(lado1,lado2,lado3);
		angulo(lado2,lado1,lado3);
		angulo(lado3,lado2,lado1);

		double area=0.0;
		double s=0.0;

		s=(lado1+lado2+lado3)/2;

		area= sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
		
		cout<<"El area es: "<<area<<endl;






	}else{
		cout<<"No es un triangulo rectangulo";
	}

		

	


}//FIn metodo ejercicio 2

void angulo (double a, double b, double c){
	double angulo=0.0;

	angulo=acos(((a*a*-1)+b*b+c*c)/(2*b*c));
	angulo=(angulo*180.0)/ PI;
	cout<<angulo<<endl;

}//Fin metodo angulo










//INicio de la funcion 2
void ejercicio3(){
	int numero=0;

	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	int mitad1=0,mitad2=0,acum1=0,acum2=0,numserie=0,temp=0;
	if(numero==1){
		cout<<1;
	}else{
		cout<<"1-";
		temp= numero;


		for(int i=2;i<=numero;i++){
			if(i%2==0){
				mitad1=i;
			
			}else{
			
				mitad1= i+1;
				i=i+1;
				temp++;
				numero++;
			
			}
		mitad2=mitad1/2;
		acum1= factorial(mitad1) /( factorial(mitad2)*factorial((mitad1-mitad2)));
		mitad2++;
		acum2=factorial(mitad1) / (factorial(mitad2)*factorial((mitad1-mitad2)));
		numserie=acum1-acum2;
		cout<<numserie<<"-";	

	
	
		}//Fin del for

	


	}//Fin del else

}//Fin metodo ejericio 3

int factorial(int num){
	int factorial=1;
	for(int i=1;i<=num;i++){
		
		factorial*=i;
	}

	return factorial;

}


/////////////////////////////////////Fin//////////////////////////
