#include <iostream>
#include <conio.h>

using namespace std;


int main() {
	int numero=1;	
	
while(numero!=0||numero!=1){
	cout<<"Ingrese el tamaño de la matriz > 0:      ";
	cin >>numero ;
	if(numero==0){
		cout<<"Feliz dia :)";
		break;
	}
	int matriz[numero][numero]; 
	
	
	for(int i=0;i<numero;i++){
		for(int j=0;j<numero;j++){	
		//matris es i es fila y j es la columna	
			if(i==0||i==numero-1){
				matriz[i][j]=1;			
		}
			else if(j==0||j==numero-1){			
						matriz[i][j]=1;
			}
			else{
							matriz[i][j]=0;
			}
			
		}//fin del llenado de matriz
	}
	
	
		for(int i=0;i<numero;i++){
		for(int j=0;j<numero;j++){
			cout<<matriz[i][j];
		}
		cout<<"\n" ;
	}

	
}	
	getch();
	return 0;
}
