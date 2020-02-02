#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <sstream>
#include <string>

using namespace std;



class Moneda{
	private:		
		string nombre;
		int cant,id_duenio;
	public:
		string duenios[6] ={"$$$Monedero$$$","Jose","Luis","Paula","Fernando","Kimberly"};
		string monedas_duenio[6];
		Moneda(string,int,int);
		void CrearMoneda();				
};


//se inicializan los atributos

Moneda::Moneda(string _nombre, int _cantidad_moneda, int _id_duenio) {
	nombre=_nombre;
	cant = _cantidad_moneda;
	id_duenio= _id_duenio;
}


void Moneda::CrearMoneda(){
	//string duenios[6] ={"$$$Monedero$$$","Jose","Luis","Paula","Fernando","Kimberly"};
	//string monedas_duenio[6];
	stringstream ss;
	ss << cant<<endl;
	string valortraducido = ss.str();
	monedas_duenio[id_duenio-1]=valortraducido;
	cout<<"Se creo una moneda y se anadio a: "<<duenios[id_duenio-1]<<" el cual ahora tiene "<<monedas_duenio[id_duenio-1]<<endl;

}

int main(){
	int estado=1,eleccion;
	string duenios[6] ={"$$$Monedero$$$","Jose","Luis","Paula","Fernando","Kimberly"};
	//string monedas_duenio[6];
	cout<<"Bienvenido\n"<<endl;
	while(estado==1){
		
		cout<<"\t\t******Menu******"<<endl<<"Presione el digito de la opcion a seleccionar\n";
		cout<<"1.\tCrear una moneda.\n2.\tVer Usuarios.\n3.\tHacer una transferencia.\n0.\tSalir."<<endl;
		cin>>eleccion;
		
		switch(eleccion){
			case 0:
				{
					cout<<"\nFeliz Dia :)";
					estado=0;
					return 1;
					break;
				}
			case 1:
				{
					string nombre_moneda;
					int cantidad_moneda,id_duenio_transferencia;
					cout<<"Ingrese el nombre de la moneda"<<endl;
					cin>>nombre_moneda;
					cout<<"Ingrese la cantidad de "<<nombre_moneda<<"´s que desea crear"<<endl;
					cin>>cantidad_moneda;
					cout<<"Seleccione a quien desea transferir la(s) monedas: "<<endl;
					for(int i=1;i<=5;i++){
					cout<<endl<<i<<" "<<duenios[i-1];				
					}
					cout<<endl;
					cin>>id_duenio_transferencia;
					Moneda nueva_moneda = Moneda(nombre_moneda,cantidad_moneda,id_duenio_transferencia);
					nueva_moneda.CrearMoneda();
					break;
				}
			case 2:
				{
					for(int i=1;i<=5;i++){
					cout<<endl<<i<<" "<<duenios[i-1];				
					}
					cout<<endl<<endl;
					break;
				}
			
		}
	}
	
	getch();
	return 0;
}





