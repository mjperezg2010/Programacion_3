#include <iostream>
#include <string>
#include <vector>

using namespace std;




//Prototipos
int menu();
void ejercicio1();
void ejercicio2();
void ejercicio3();
int conversion(char);
void imprimirArreglo(int*);
void clearArray(int*);
void listarTodo(string);
string mes(string);

//Main
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
				cout<<"Esta opcion no existe"<<endl;
				break;



		}//Fin del switch
		

		cout<<"\nDesea continuar[s/n]? ";
		cin>>res;
	}while(res=='s' || res=='S');



	return 0;
}
//FIn main

//Funcion menu
int menu(){
	int opcion=0;
	
	cout<<"--Menu--"<<endl<<
		"1. (En construccion)"<<endl<<
		"2. Permutacion"<<endl<<
		"3. Fechas"<<endl<<
		"Ingrese una opcion: "<<endl;
	cin>>opcion;

	return opcion;




}//Fin del menu


//Funcion ejercicio1
void ejercicio1(){
	string cadena;
	string subs;

	cadena="holas";
	subs=cadena.substr(0,2);

	cout<<"Es: "<<subs<<endl;



/*	int* conjunto1 = new int[size];
	int* conjunto2 = new int[size];
	int* conjunto3 = new int [size];
	int* conjunto4 = new int [size];
	int* conjunto5 = new int[size];
*/

}//Fin ejercicio 1



///////////////////////////////////////




void ejercicio2(){
	int num1,num2,num3,num4;
	string numero;
	cout<<"Ingrese una numero de 4 digitos: ";
	cin>>numero;
	
	num1=conversion(numero[0]);
	num2=conversion(numero[1]);
	num3=conversion(numero[2]);
	num4=conversion(numero[3]);

	int* arreglo1 = new int[4];
	int* arreglo2= new int[4];
	int* arreglo3 = new int[4];
	int* arreglo4 = new int[4];
	int* arreglo5 = new int[4];
	int* arreglo6 = new int[4];
	int* arreglo7 = new int[4];
	int* arreglo8 = new int[4];
	int* arreglo9 = new int[4];
	int* arreglo10 = new int[4];
	int* arreglo11 = new int[4];
	int* arreglo12 = new int[4];

	arreglo1[0]=num2;
	arreglo1[1]=num1;
	arreglo1[2]=num3;
	arreglo1[3]=num4;

	arreglo2[0]=num2;
	arreglo2[1]=num3;
	arreglo2[2]=num1;
	arreglo2[3]=num4;

	arreglo3[0]=num2;
	arreglo3[1]=num3;
	arreglo3[2]=num4;
	arreglo3[3]=num1;

	arreglo4[0]=num3;
	arreglo4[1]=num2;
	arreglo4[2]=num4;
	arreglo4[3]=num1;

	arreglo5[0]=num3;
	arreglo5[1]=num4;
	arreglo5[2]=num2;
	arreglo5[3]=num1;

	arreglo6[0]=num3;
	arreglo6[1]=num4;
	arreglo6[2]=num1;
	arreglo6[3]=num2;

	arreglo7[0]=num4;
	arreglo7[1]=num3;
	arreglo7[2]=num1;
	arreglo7[3]=num2;

	arreglo8[0]=num4;
	arreglo8[1]=num1;
	arreglo8[2]=num3;
	arreglo8[3]=num2;

	arreglo9[0]=num4;
	arreglo9[1]=num1;
	arreglo9[2]=num2;
	arreglo9[3]=num3;

	arreglo10[0]=num1;
	arreglo10[1]=num4;
	arreglo10[2]=num2;
	arreglo10[3]=num3;

	arreglo11[0]=num1;
	arreglo11[1]=num2;
	arreglo11[2]=num4;
	arreglo11[3]=num3;

	arreglo12[0]=num1;
	arreglo12[1]=num2;
	arreglo12[2]=num3;
	arreglo12[3]=num4;
	
	imprimirArreglo(arreglo1);
	imprimirArreglo(arreglo2);
	imprimirArreglo(arreglo3);
	imprimirArreglo(arreglo4);
	imprimirArreglo(arreglo5);
	imprimirArreglo(arreglo6);
	imprimirArreglo(arreglo7);
	imprimirArreglo(arreglo8);
	imprimirArreglo(arreglo9);
	imprimirArreglo(arreglo10);
	imprimirArreglo(arreglo11);
	imprimirArreglo(arreglo12);


	clearArray(arreglo1);
	clearArray(arreglo2);
	clearArray(arreglo3);
	clearArray(arreglo4);
	clearArray(arreglo5);
	clearArray(arreglo6);
	clearArray(arreglo7);
	clearArray(arreglo8);
	clearArray(arreglo9);
	clearArray(arreglo10);
	clearArray(arreglo11);
	clearArray(arreglo12);
	





}//FIn ejercicio2



///////////////////////////////////////////




void ejercicio3(){

	vector<string> fechas;
	string numero;
	char re='s';
	do{
		bool cierto=true;

		
			cout<<"Ingrese un numero formato de fecha YYYYMMDD: "<<endl;
			cin>>numero;
			

		
		fechas.push_back(numero);

		
		cout<<"Desea ingresar otra fecha?(s/n): ";
		cin>> re;
	}while(re=='s' || re=='S');
	
	cout<<"\nListar todo"<<endl;
	for(int i=0;i<fechas.size();i++){
		listarTodo(fechas[i]);
		cout<<"\n";

	}
	











}//Fin ejercicio3




int conversion(char num){
	int convert;
	if(num=='1')
		convert=1;
	if (num=='2')
		convert=2;
	if(num=='3')
		convert=3;
	if(num=='4')
		convert=4;
	if(num=='5')
		convert=5;
	if(num=='6')
		convert=6;
	if(num=='7')
		convert=7;
	if(num=='8')
		convert=8;
	if(num=='9')
		convert=9;
	if(num=='0')
		convert=0;


	return convert;
}//Fin de converson





//##########################
 ///////////////////////////////////////////////////////////////////////////

void imprimirArreglo(int* arreglo){
	for(int i=0;i<4;i++){
		cout<<arreglo[i]<<" ";
	
	}
	cout<<" "<<endl;

}//Fin funcion


//LIbera la memoria dle arreglo.
void clearArray(int* Array){
	delete[] Array;
	Array=NULL;

}



////////////////#####################
//imprimir listasdo
void listarTodo(string cadena){
	string year,dia,mes1,mestotal;

	year=cadena.substr(0,4);
	dia=cadena.substr(6,7);
	mes1=cadena.substr(3,5);
	mestotal=mes(mes1);

	cout<<"Es "<<dia<<" de "<<mestotal<<" del "<<year;

}

string mes(string mes){
	string resultado;

	if(mes[1]=='1')
		resultado="Enero";
	if(mes[1]=='2')
		resultado="Febrero";
	if(mes[1]=='3')
		resultado="Marzo";
	if(mes[1]=='4')
		resultado="Abril";
	if(mes[1]=='5')
		resultado="Mayo";
	if(mes[1]=='6')
		resultado="Junio";
	if(mes[1]=='7')
		resultado="Julio";
	if(mes[1]=='8')
		resultado="Agosto";
	if(mes[1]=='9')
		resultado="Septiembre";
	if(mes[0]=='1' && mes[1]=='0')
		resultado="Octubre";
	if(mes[0]=='1' &&  mes[1]=='1')
		resultado="Noviembre";
	if(mes[0]=='1' &&  mes[1]=='2')
		resultado="Diciembre";

	return resultado;


}
