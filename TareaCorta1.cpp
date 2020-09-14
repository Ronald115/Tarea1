#include <iostream>
#include <vector>
using namespace std;

void triangulo() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "Digite 3 numeros: " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    if (num1 == num2 and num1 == num3) {
        cout << "el triangulo es equilatero " << endl;
    }
    if ((num1 == num2 and num1 != num3) or (num1 == num3 and num1 != num2) or (num2 == num3 and num2 != num1) or (num2 == num1 and num2 != num3) or (num3 == num1 and num3 != num2) or (num3 == num2 and num3 != num1)) {
        cout << "el triangulo es isoceles " << endl;
    }
    if (num1 != num2 and num1 != num3 and num2 != num3) {
        cout << "el triangulo es escaleno " << endl;
    }
}
void dibujarCuadro() {
    int numero;
    cout << "Digite un numero mayor a 1: ";
    cin >> numero;
    cout << "A continuación su cuadrado \n\n";
    for (int i = 0; i < numero;i = i + 1) {
        for (int o = 0; o < numero; o = o + 1) {
            cout << "*";
        }
        cout << endl;
    }

}

void matriz() {
    cout << "Matriz inicial:";
    cout << endl;
    int Matriz[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
    int cont = 4;
    int filas = (sizeof(Matriz) / sizeof(Matriz[0]));
    int columnas = (sizeof(Matriz[0]) / sizeof(Matriz[0][0]));
    for (size_t i{ 0 };i < filas;i++) {
        for (size_t j{ 0 };j < columnas;j++) {
            cout << " " << Matriz[i][j];
        }
        cout << endl;
    }
    std::vector<std::int32_t> l1 = {};

    for (int o = 0;o < filas;o++) {
        for (int p = 0;p < columnas;p++) {
            l1.push_back(Matriz[p][cont]);
        }
        cont = cont - 1;
    }

    cont = 0;
    int cont2 = 0;

    for (int o = 0;o < filas;o++) {
        for (int z = 0;z < filas;z++) {
            Matriz[cont][z] = l1[cont2];
            cont2 = cont2 + 1;
        }
        cont = cont + 1;
    }
    cout << "Nueva Matriz: ";
    cout << endl;
    for (size_t i{ 0 };i < filas;i++) {
        for (size_t j{ 0 };j < columnas;j++) {
            cout << " " << Matriz[i][j];
        }
        cout << endl;
    }

}
    int main() {
        triangulo();
        dibujarCuadro();
        matriz();
        return 0;
    }