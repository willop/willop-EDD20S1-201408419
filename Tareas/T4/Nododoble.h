#include <iostream>
#include <stdio.h>


using namespace std;

class Nododoble{

		//variables de la clase lista doble
	private:
		int dato;
		string nombre;
		Nododoble *anterior;
		Nododoble *siguiente;

		//metodos
	public:
		void insertar(Nododoble *&listadoble_,int dato_,char nombre_){
		Nododoble *nuevonodo= new Nododoble();
		nuevonodo->dato=dato_;
		nuevonodo->nombre=nombre_;
		Nododoble *aux = listadoble_;
		Nododoble *aux2;

	//si ya tiene un nodo
		while(aux!=NULL){
			aux2=aux;
			aux=aux->siguiente;
		}

    //si es el primer elemento
	if(listadoble_==aux){

		listadoble_ = nuevonodo;
	}


	//ingresar elemento
	else{
	aux2->siguiente = nuevonodo;
	}

nuevonodo->siguiente=NULL;
nuevonodo->anterior=aux2;

	cout<<"\nElemento agregado a la lista con numero: "<<dato_<<endl<<" y nombre: "<<nombre_;
	cin.get();
		}


		void mensaje(int hola){

			cout<<"Si se comunico "<<hola;
		}

		//metodo para ver lista
        void verlista(Nododoble *lista){
            Nododoble *actual = new Nododoble();
            actual = lista;


            if(actual==NULL)
            {
                cout<<"La lista esta vacia";
            }
            else{
                while(actual!=NULL){
                cout<<endl<<actual->dato<<"  "<<actual->nombre<<endl;
                actual = actual->siguiente;
            }

            }
            cin.get();
        }//fin del metodo de ver la lista

        //metodo para eliminar el ultimo nodo de la lista
        void eliminarultimo(Nododoble *&listab){
            Nododoble *nodoeliminar = new Nododoble();
            nodoeliminar = listab;
            Nododoble *nodoanterior;



            if(nodoeliminar==NULL){
                cout<<"La lista esta vacia";
                cin.get();

            }
            else{
                while(nodoeliminar!=NULL){ //indica que el nodo ya llego al final de la lista por tanto el nodo anterior es el ultimo y sera ese el que se eliminara

                    nodoanterior=nodoeliminar;
                    nodoeliminar = nodoeliminar->siguiente;
                }
                    //aca se elimina ese nodo mostrandolo en pantalla
                cout<<"Se eliminara el ultimo nodo con el dato:  "<<nodoanterior->dato<<"  y nombre:"<<nodoanterior->nombre<<endl;
                Nododoble *nuevofin=nodoanterior->anterior;
                cout<<"Ahora el ultimo nodo en la lista es: "<<nuevofin->dato<<"  "<<nuevofin->nombre;
                nuevofin->siguiente=NULL;
                delete nodoanterior;

                cin.get();


            }



            }//fin del metodo de eliminar

        //metodo para buscar un elemento a travez de un string
        void buscarelemento(Nododoble *lista, char match){
        Nododoble *nodoactual = new Nododoble();
        nodoactual=lista;

            if(lista!=NULL)
{


                while((nodoactual!=NULL)&&(nodoactual->dato!=match)){//buscara hasta el ultimo nodo
                    nodoactual= nodoactual->siguiente;
                }

                if(nodoactual==NULL){//llego al final de la lista y no encontro nada
                    cout<<"No hay elementos iguales en esta lista";
                    cin.get();
                }

                else if(nodoactual->dato==match){
                    cout<<"Se encontro el dato que estaba buscando"<<endl<<nodoactual->dato<<"  "<<nodoactual->nombre;
                    cin.get();
                }
                else{
                    //si la lista esta vacia
            cout<<"La lista esta vacia, por favor ingrese datos en la primera opcion del menu siguiendo las instrucciones";
cin.get();

                }
}//fin del if


else{
		cout<<"La lista esta vacia";
		cin.get();
	}



        }//fin de buscar

};
