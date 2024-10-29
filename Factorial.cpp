#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)  
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int numero;
    cout << "Introduce un numero para calcular su factorial: ";
    cin >> numero;
    
    if (numero < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
    }

    return 0;
}
