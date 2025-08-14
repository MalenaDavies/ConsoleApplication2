
#include <iostream>
using namespace std;

int main()
{
    char opciones;
    double gramos = 0, kilogramos = 0, metros = 0, centimetros = 0;
    cout << "Bienvenido al conversor de unidades. Que desea convertir?" << endl;
    cout << "Gramos a kilogramos (G). Metros a centimetros (M).";
    cin >> opciones;

    if (opciones == 'G') {
        cout << "Ingrese los gramos para pasar a kilogramos: ";
        cin >> gramos;
        kilogramos = gramos / 1000;
        cout << "Los " << gramos << " gramos en kilogramos son: " << kilogramos;
    }

    else if (opciones == 'M') {
        cout << "Ingrese los metros para pasar a centimetros: ";
        cin >> metros;
        centimetros = metros * 1000;
        cout << "Los " << metros << " gramos en centimetros son: " << centimetros;
    }

    else {
        cout << "Por favor, ingrese GK o MC.";
    }
}