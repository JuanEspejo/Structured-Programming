#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

typedef struct {
    char nombre[10];
    double masa;
    double altura;
    double IMC;
} Persona;

double obtenerIMC(double masa, double altura);
void leerIMC(double imc);

main() {
    Persona persona;
    cout << "ingrese nombre: ";
    cin >> persona.nombre;
    cout << persona.nombre << ", ingrese su masa (kg): ";
    cin >> persona.masa;
    cout << persona.nombre << ", ingrese su altura (m): ";
    cin >> persona.altura;
    persona.IMC = obtenerIMC(persona.masa, persona.altura);
    cout << persona.nombre << ", su IMC es ";
    cout << fixed << setprecision(2) << persona.IMC;
    cout << " y necesitas ";
    leerIMC(persona.IMC);
}

double obtenerIMC(double masa, double altura) {
    return masa/pow(altura,2);
}

void leerIMC(double imc) {
    if (imc < 18.5)
        cout << "ganar peso.";
    if (18.5 <= imc && imc < 25)
        cout << "mantener peso.";
    if (25 <= imc)
        cout << "perder peso.";
    cout << endl;
}
