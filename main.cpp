#include <iostream>
#include <cmath>
/* Hallar la pendiente y el angulo e inclinacion de la recta que pasa por dos puntos dados */


// --------------------------------------- VARIABLES GLOBALES
double x1,yy1,x2,yy2;
// --------------------------------------- DECLARACION DE FUNCIONES
void pideDatos();
double pendiente(double, double, double, double);
double angulo(double);
double radianesGrados(double);
// --------------------------------------- FUNCION PRINCIPAL
using namespace std;
int main(int argc, char** argv) {
	double m, teta;
	cout<<"ECUACION DE LA RECTA"<<endl;
	cout<<"Hallar la pendiente y el angulo de inclinacion de la recta que pasa por dos puntos dados"<<endl<<endl;
	
	pideDatos();
	m = pendiente(x1,yy1,x2,yy2);
	cout<<endl<<"m = "<<m<<endl;
	teta = angulo(m);
	cout<<"teta = "<<teta<<" radianes"<<endl;
	cout<<"teta = "<<radianesGrados(teta)<<" grados"<<endl;
	return 0;
}
// --------------------------------------- IMPLEMENTACION DE LAS FUNCIONES
void pideDatos(){
	cout<<"PUNTO A"<<endl;
	cout<<"Ingresa X1: ";
	cin>>x1;
	cout<<"Ingresa Y1: ";
	cin>>yy1;
	
	cout<<endl<<"PUNTO B"<<endl;
	cout<<"Ingresa X2: ";
	cin>>x2;
	cout<<"Ingresa Y2: ";
	cin>>yy2;
}
double pendiente(double x1, double y1, double x2, double y2){
	double resultado = (y2-y1)/(x2-x1);
	return resultado;
}
double angulo(double m){
	double resultado = atan(m);
	return resultado;
}
double radianesGrados(double radianes){
	double PI = 3.1416;
	double grados = (radianes * 180)/PI;
	return grados;
}