#include<iostream>
#include<iomanip>
#include<ctype.h>

//Codigo hecho por Jhosmar Suarez

using namespace std;

void seccion_aurea(){
	const float r = (sqrt(5)-1)/2;
	float x1, x2, a, b, e, fx1, fx2, e_iteracion;
	int n;
	cout<<"Seleccione Fix deseado: ";
	cin>>n;
	cout<<"Valor a: ";
	cin>>a;
	cout<<"Valor b: ";
	cin>>b;
	cout<<"Ingrese tolerancia (E): ";
	cin>>e;
	
	int k = ceil(log(e/(b-a))/log(r));
	cout<<"numero de iteraciones previstas: "<<k<<endl;
	system("pause");	
	for(int i = 1; i <= k; i++){
		cout<<endl<<"iteracion: "<<i<<endl;
		x1 = b - r * (b - a);
		x2 = a + r * (b - a);
		cout<<endl<<"x1 = "<<fixed<<setprecision(n)<<x1<<endl;
		cout<<"x2 = "<<fixed<<setprecision(n)<<x2<<endl;
		fx1 = pow(-x1, 3) + 18 * pow(x1, 2) - 60 * x1;
		fx2 = pow(-x2, 3) + 18 * pow(x2, 2) - 60 * x2;
		e_iteracion = abs(b - a);
		cout<<"Fx1 = "<<fixed<<setprecision(n)<<fx1<<endl;
		cout<<"Fx2 = "<<fixed<<setprecision(n)<<fx2<<endl;
		cout<<"Error: "<<e_iteracion<<endl;
		
		
		if(fx1 > fx2){
			b = x2;
			}
		else if(fx2 > fx1){
			a = x1;
			}
			else{
				a = x1;
				b = x2;
				}
		}
}

void fibonacci(){
	cout<<"Opcion aun no disponible";
	}

int main(int argc, char *argv[]){
	char continuar;
	do{
		int opcion;
	
		cout<<"Seleccione algoritmo"<<endl<<"1.Seccion aurea"<<endl<<"2.fibbonacci"<<endl<<">>";
		cin>>opcion;
		switch(opcion){
			case 1:
				seccion_aurea();
				break;
			case 2:
				fibonacci();
				break;
			default:
				cout<<"Valor invalido!!";
				break;
			}
		cout<<"Desea continuar? (S/N): ";
		cin>>continuar;
		continuar = toupper(continuar);
	}
	while(continuar == 'S');
	
	return 0;
}
