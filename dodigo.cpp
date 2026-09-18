#include <iostream>

using namespace std;

// Recibe una copia: NO modifica la carga original
void ConsultarCarga(int carga) {
    cout << "Carga actual: " << carga << " Wh" << endl;
}

// Recibe por referencia: SÍ modifica la carga original
void CargarBateria(int &carga, int Wh) {
    carga += Wh;
}

// Recibe un puntero: SÍ modifica la carga original
void ConsumirEnergia(int *carga, int Wh) {
    *carga -= Wh;
}

int main() {

    int carga = 1000;

    cout << "Carga inicial: " << carga << " Wh" << endl;

    // 1. Consultar carga
    ConsultarCarga(carga);

    // 2. Cargar batería
    CargarBateria(carga, 500);
    cout << "Despues de cargar 500 Wh: " << carga << " Wh" << endl;

    // 3. Consumir energía
    ConsumirEnergia(&carga, 300);
    cout << "Despues de consumir 300 Wh: " << carga << " Wh" << endl;

    return 0;
}