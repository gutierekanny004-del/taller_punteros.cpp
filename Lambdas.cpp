#include <iostream>
#include <functional>
using namespace std;


double operar(double* arr, int n,
              function<double(double)> transformar,
              function<double(double, double)> acumular) {

    double resultado = transformar(arr[0]); 
    for (int i = 1; i < n; i++)
        resultado = acumular(resultado, transformar(arr[i]));

    return resultado;
}

int main() {
    int n;
    cout << "Cuantos elementos? ";
    cin >> n;

  
    double* arr = new double[n];

    for (int i = 0; i < n; i++) {
        cout << "  arr[" << i << "]: ";
        cin >> arr[i];
    }

   
    auto transformar = [](double x) {
        return x * 2;
    };

  
    auto acumular = [](double acum, double x) {
        return acum + x;
    };

    double resultado = operar(arr, n, transformar, acumular);

    cout << "\nCada elemento duplicado y luego sumados: " << resultado << "\n";

    
    cout << "\nPaso a paso:\n";
    for (int i = 0; i < n; i++)
        cout << "  arr[" << i << "] = " << arr[i] << "  ->  duplicado = " << arr[i] * 2 << "\n";

    delete[] arr;

    return 0;
}
