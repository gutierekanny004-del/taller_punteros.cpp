#include <iostream>
using namespace std;


double cuadrado(double x) { return x * x; }
double doble(double x)    { return x * 2; }
double inverso(double x)  { return 1.0 / x; }


void aplicar(double* arr, int n, double (*func)(double)) {
    cout << "\nResultados:\n";
    for (int i = 0; i < n; i++)
        cout << "  arr[" << i << "] = " << func(arr[i]) << "\n";
}

int main() {
    int n;
    cout << "Cuantos elementos tiene el arreglo? ";
    cin >> n;

    
    double* arr = new double[n];

    
    for (int i = 0; i < n; i++) {
        cout << "  arr[" << i << "]: ";
        cin >> arr[i];
    }

    
    cout << "\nQue funcion quieres aplicar?\n";
    cout << "  1. Cuadrado (x * x)\n";
    cout << "  2. Doble    (x * 2)\n";
    cout << "  3. Inverso  (1 / x)\n";
    cout << "Opcion: ";
    int op;
    cin >> op;

    
    if      (op == 1) aplicar(arr, n, cuadrado);
    else if (op == 2) aplicar(arr, n, doble);
    else if (op == 3) aplicar(arr, n, inverso);
    else cout << "Opcion invalida.\n";

    
    delete[] arr;

    return 0;
}
