#include <iostream>
#include <String>
using namespace std;

	//Nombre: Kevin Ortega
	//Curso: Programación III
	//Semana IV - Laboratorio Producto
	
	//nullptr en DevC++ es cero(0)
	
	
	
	
	

	//Los Structs siempre van arriba del Int Main()
	struct Producto{
		int codigo;
		string nombre;
		double precio;
	};
	
	struct Nodo{
		//int codigo;
		//string nombre;
		//double precio;
		Producto data;
		Nodo* siguiente;
	};

int main(){
	//Se accede a un puntero por medio de una flecha
	
	//Nodo = Datos + Puntero al Siguiente
	//Estructura de un Nodo
	//struct nodo{
		//Estudiante data;
		//Nodo* siguiente;
	//};
	
	//Reglas de Oro
		//Todo puntero debe iniciar en nullptr si no apunta a nada
		//Cada new debe tener su delete (Eventualmente)
		//Nunca pierdas las referencias al primer nodo
		//Nunca uses un puntero borrado
		
	//Practica1 - Crear 3 Nodos
	
	
	//Primer Nodo
	Nodo* primero = new Nodo;
	primero->data.codigo = 101;
	primero->data.nombre = "Laptop";
	primero->data.precio = 5500.50;
	primero->siguiente = 0;
	
	//Segundo Nodo
	Nodo* segundo = new Nodo;
	segundo->data.codigo = 102;
	segundo->data.nombre = "Mouse";
	segundo->data.precio = 150.75;
	segundo->siguiente = 0;
	
	//Enlace
	primero->siguiente = segundo;
	
	//Tercer Nodo
	Nodo* tercero = new Nodo;
	tercero->data.codigo = 103;
	tercero->data.nombre = "Teclado";
	tercero->data.precio = 300.00;
	tercero->siguiente = 0;
	
	//Enlace
	segundo->siguiente = tercero;
	
	//Recorrido con While
	Nodo* actual = primero;
	while(actual != 0){
		cout<<"Codigo: "<<actual->data.codigo<<endl;
		cout<<"Nombre: "<<actual->data.nombre<<endl;
		cout<<"Precio: "<<actual->data.precio<<endl;
		cout<<"------------------------------------"<<endl;
		
		actual = actual->siguiente;
	}

	//Limpieza de memoria
	actual = primero;
	while(actual != 0){
		Nodo* temp = actual;
		actual = actual->siguiente;
		delete temp;
	}
	cout<<"Sistema creado por: Kevin Alexander Ortega Pineda"<<endl;
	cout<<"9941-24-2676"<<endl;
	cout<<"Curso: Programación 3"<<endl;
	cout<<"Semana 4 - Lab. Producto"<<endl;
	
	primero = 0;
	
	return 0;
}
