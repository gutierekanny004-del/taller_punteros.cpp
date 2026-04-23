#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Filas: ";    cin >> n;
    cout << "Columnas: "; cin >> m;

   
    int** mat = new int*[n];
    for (int i = 0; i < n; i++)
        mat[i] = new int[m];

    
    cout << "\nIngresa los valores:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cout << "  [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }

    
    cout << "\nMatriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << mat[i][j] << " ";
        cout << "\n";
    }

   
    cout << "\nSuma de cada fila:\n";
    for (int i = 0; i < n; i++) {
        int suma = 0;
        for (int j = 0; j < m; j++)
            suma += mat[i][j];
        cout << "  Fila " << i << ": " << suma << "\n";
    }

   
    int mayor = mat[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (mat[i][j] > mayor)
                mayor = mat[i][j];
    cout << "\nMayor elemento: " << mayor << "\n";

   
    cout << "\nMatriz transpuesta:\n";
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++)
            cout << mat[i][j] << " ";
        cout << "\n";
    }

    
    for (int i = 0; i < n; i++)
        delete[] mat[i];
    delete[] mat;

    return 0;
}
