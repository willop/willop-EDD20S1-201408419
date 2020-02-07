#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
#include <utility>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int carne;
	string nombre;
	Nodo *siguiente;
};

//prototipos
void insertar(Nodo *&,int,string);

void recorrer(Nodo *);

void buscar(Nodo *,int);

void elimin(Nodo *&,int);

int main(){
	
	Nodo *listasimple= NULL;
	int num_carnet;
	
	int estado =1;
	int opcion;
	
	
	//inicia el menu
	while(estado){
	string name;
	cout<<"UNIVERSIDAD SAN CARLOS DE GUATEMALA\nFACULTAD DE INGENIERIA\nESCUELA DE CIENCIAS Y SISTEMAS\nEstructuras de datos\nSeccion A";
	cout<<"\t\t\t\t---------------------MENU---------------------";
	cout<<"\n\n1-Ingresar datos\n2-Eliminar nodo\n3-Buscar\n4-Ver lista\n5-Salir"<<endl<<"Ingrese una opcion ...   ";
	cin>>opcion;
	switch(opcion){
		case 1:{
			system("cls");
			cout<<"Ingese el numero de carnet:  ";
			cin>>num_carnet;
			cout<<"Ingrese el nombre del estudiante:  ";
			cin>>name;
			insertar(listasimple,num_carnet,name);			
			system("cls");
			break;
		}
		case 2:{
			int nn;
			system("cls");	
			cout<<"Ingrese el nodo que desea eliminar:  ";
			cin>>nn;				
			elimin(listasimple,nn);
			system("cls");
			break;
		}
		case 3:{
			system("cls");
			int idnum;
			cout<<"Ingrese el numero de carnet que desea buscar:  ";
			cin>>idnum;
			buscar(listasimple,idnum);
			break;
		}
		case 4:{
			system("cls");
			recorrer(listasimple);
			system("pause");
			system("cls");
			break;
		}
		case 5:{
	  		system("cls");
	  		//pintar();
	  		//gotoxy(2,1);printf("Salio del menu");
	  		estado=0;
	  		//system("pause>aa");
	  		exit(-1);
	  	}
	  	default:{
	  		system("cls");
	  		//pintar();
	  		//gotoxy(1,1);printf("SELECCIONE UNA OPCION VALIDA");
	  		break;
	  	}
		
	}//fin del switch
	
	}//fin del while
	
	
	
	getch();
	
	return 0;
}



void insertar(Nodo *&lista,int carnet,string nombrec){
	//se crea el nodo
	Nodo *nuevonodo= new Nodo();
	//se ingresa la informacion en el nodo
	nuevonodo->carne=carnet;
	nuevonodo->nombre=nombrec;
	Nodo *aux = lista;
	Nodo *aux2;
	
	//si ya tiene un nodo
	while(aux!=NULL){
	aux2=aux;	
	aux=aux->siguiente;
}
	if(lista==aux){
		lista = nuevonodo;
	}
	//si la lista esta vacia
	else{
	aux2->siguiente = nuevonodo;
	}

nuevonodo->siguiente=aux;
	cout<<"\nElemento agregado a la lista con carnet: "<<carnet<<" y nombre: "<<nombrec;
	}

void recorrer(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	while(actual!=NULL){
		cout<<endl<<actual->carne<<"     "<<actual->nombre<<endl;
		actual = actual->siguiente;
	}
}

void buscar(Nodo *lista, int carnet){
	if(lista!=NULL)
	{
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while((actual!=NULL)&&(actual->carne != carnet)){
		//cout<<endl<<actual->carne<<"     "<<actual->nombre<<endl;
		actual = actual->siguiente;		
	}
	if(actual==NULL){
		cout<<"No se encontro el carnet que desea buscar";
	}
	if(actual->carne==carnet){
		cout<<"Datos del nodo que busca:\n\nNombre: "<<actual->nombre<<"\nCarne: "<<actual->carne;
	}
	}//fin del if
	
	else{
		cout<<"La lista esta vacia";
	}
	
}

//eliminara el nodo por el numero de carnet

void elimin(Nodo *&lista,int nu){
	
	if(lista!=NULL){
		Nodo *nodo_borrar;
		Nodo *anterior=NULL;
		nodo_borrar = lista;
		
		for(int i=1;i<nu;i++){
			
			anterior=nodo_borrar;
			nodo_borrar= nodo_borrar->siguiente;
						
			if(nodo_borrar==NULL){
				cout<<"No se encontro el carnet que desea borrar";
				system("pause");
				
			}
		//si es el primer nodo 
	
			else{
				//elimina cualquier otro nodo
				anterior->siguiente=nodo_borrar->siguiente;
				delete nodo_borrar;
				cout<<"Se elimino el nodo";
				system("pause");
			}
		
		}
		//elimina el primer nodo
			if(anterior==NULL){
				lista= lista->siguiente;
				delete nodo_borrar;
				cout<<"Se elimino el nodo";
				system("pause");
			}
		
		
	}
	else{
		cout<<"Lista vacia";
	}	
}
