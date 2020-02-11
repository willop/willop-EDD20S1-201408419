#include <iostream>
#include "Nododoble.h"

using namespace std;


int main(){

	Nododoble *listadoblep =NULL;

    Nododoble nodob;
	//incial el menu
	int estado=1;

	do{
		cout<<"\tUNIVERSIDAD SAN CARLOS DE GUATEMALA"<<endl;
		cout<<"\tFACULTAD DE INGENIERIA"<<endl;
		cout<<"\tESCUELA DE CIENCIAS Y SISTEMAS"<<endl;
		cout<<"\tESTRUCTURAS DE DATOS"<<endl;
		cout<<"\tSECCION A-"<<endl;


		cout<<"\t\t\t\t\t****************MENU****************\n"<<endl;
		cout<<"\t1.\tIngresar elemento a la lista"<<endl;
		cout<<"\t2.\tEliminar el ultimo elemento de la lista"<<endl;
		cout<<"\t3.\tBuscar elemento dentro de la lista\n\t4.\tVer lista\n\t0\tSalir del sistema"<<endl<<"\n\t\tSeleccione una opcion ...";
		int desicion;
		cin>>desicion;


		switch(desicion){
			//ingresar elemento
			case 1:{
				system("clear");
				cout<<"Ingese un valor que guardara en la cola:    ";
				int numm;
				cin>>numm;
                cout<<"Ingrese el nombre:   ";
                string nombre;
                cin>>nombre;
				nodob.insertar(listadoblep,numm,nombre);
				cin.get();
				system("clear");
				break;
			}
			//eliminar el ultimo elemento
			case 2:{
			    system("clear");
                cout<<"Se eliminará el ultimo elemento de esta lista"<<endl;
                nodob.eliminarultimo(listadoblep);
                cin.get();
				system("clear");
				break;
			}
			//buscar elemento dento de la lista
			case 3:{
                system("clear");
                cout<<"Ingrese el caracter a buscar:   ";
                string valorss;
                cin>>valorss;
                char letra=valorss[0];
                nodob.buscarelemento(listadoblep,letra);
                cin.get();
				system("clear");
				break;
			}
			case 4:{
                system("clear");
                cout<<"Datos en la lista:\n\n\n";
			    //Nododoble listar;
			    nodob.verlista(listadoblep);
			    cin.get();
				system("clear");
                break;
			}
			case 0:{
                //clrscr();
                estado=0;
				break;
			}


		}//fin del switch

	}while(estado!=0);//fin del while

}
