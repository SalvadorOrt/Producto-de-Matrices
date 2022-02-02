#include<iostream>
using namespace std;
int main(){
	int filas,columnas, columnas2;
	int matriz1[10][10];
	int matriz2[10][10];
	int matriz3[10][10];
	cout<<"ingrese filas ";
	cin>>filas;
	cout<<"ingrese colunas ";
	cin>>columnas;
	for(int i = 0; i < filas;i++){
		for(int j = 0; j < columnas;j++){
			cout<<"ingrese elemento ["<<i+1<<"] ["<<j+1<<"] ";
			cin>>matriz1[i][j];
		}
	}
	for(int i = 0; i < filas;i++){
		for(int j = 0; j < columnas;j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"ingrese columnas ";
	cin>>columnas2;
	for(int i = 0; i < columnas;i++ ){
		for(int j = 0; j < columnas2;j++){
			cout<<"ingrese elemento ["<<i+1<<"]["<<j+1<<"] ";
			cin>>matriz2[i][j];
		}
	}
	for(int i = 0; i < columnas;i++){
		for(int j = 0; j < columnas2;j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i = 0; i < filas;i++){
		for(int j = 0; j < columnas2;j++){
			matriz3[i][j] = 0;
			for(int k = 0; k < columnas;k++){
				matriz3[i][j]=matriz3[i][j]+matriz1[i][k]*matriz2[k][j];
			}
		}
	}
	cout<<"Producto : "<<endl;
	for(int i = 0; i < filas;i++){
		for(int j = 0; j < columnas2;j++){
			cout<<matriz3[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
