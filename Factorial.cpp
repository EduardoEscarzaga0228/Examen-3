#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)  
        return 1;
    else
        return n * factorial(n - 1);
}

void cajeroautomatico(){
    int saldo = 2000;
    int x,opc, cantidad,saldo;

    do{
        cout<<endl<<"Menu"<<endl;
        cout<<endl<<"1. Consultar saldo";
        cout<<endl<<"2. Retirar efectivo";
        switch (x){
        case 1:
            cout<<endl<<"Saldo: " << saldo;
            break;
        
        case 2:
            cout<<endl<<"Ingrese la cantidad que desea retirar: "<<endl;
            cin>>cantidad;
            saldo=saldo-cantidad;
            cout<<endl<<"Su saldo actual es: "<<saldo;
        default:
        cout<<"Error";
            break;
        }
        cout<<endl<<"Desea salir del programa? s/n"<<endl;
        cin>>opc;
    }while(opc=='s')
}


int main() {
    int opc,y;
    int numero;

    cout<<endl<<"Menu de opciones"<<endl;
    cout<<endl<<"1. Calcular factorial"<<endl;
    cout<<endl<<"2. Usar cajero Automatico"<<endl;
    cout<<endl<<"Ingresa una opcion"<<endl;
    cin>>y;

    do{
        switch(y){
            case 1: 
                cout<<endl<<"Introduce un numero para calcular su factorial: "<<endl;
                cin>>numero;
                    if (numero<0) {
                        cout<<endl<<"No se puede factorizar numeros negativos"<<endl;
                    }else{
                        cout<<endl<<"El factorial de " << numero << " es: " << factorial(numero)<<endl;
                    }
                break;

            case2:
                cajeroautomatico();
                break;
        }
    }while(opc=='s')
    return 0;
}
