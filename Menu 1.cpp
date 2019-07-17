#include<iostream>

using namespace std;

int main(){
	
	int numc,opc,numx;
	float extra,saldo=0,retiro;
	cout<<"\tBienvenido a el menu"<<endl;
	cout<<"1. Sacar el cubo de un numero"<<endl;
	cout<<"2. Definir si es par o impar el numero"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Elija una Opcion"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1: cout<<"Diga el numero que desea saber el cubo:  ";
		         cin>>numc;
		         numc=numc*numc*numc;
		         cout<<"El numero en su valor cubico es: "<<numc;break;
		case 2: cout<<"Diga el numero que desea saber si es par o impar: ";
		        cin>>numx;
		        
		      	if(numx%2==0){
		cout<<"el numero es par";
	}else{
		cout<<"el numero es impar";
	}

		        
		
		case 3:break;
	}
	
	
	
	
	
	return 0;
}
