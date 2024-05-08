#include <iostream>
#include <limits>
using namespace std;

class HRSystem {
private:
    int empleados;
    double totalNomina;
    int horasTrabajadas;
    int incidentesSeguridad;

public:
    HRSystem() : empleados(0), totalNomina(0.0), horasTrabajadas(0), incidentesSeguridad(0) {}

    void gestionarEmpleados() {
        cout << "Gestionando empleados" << endl;
    }

    void gestionarNominas() {
        cout << "Gestionando nominas" << endl;
    }

    void gestionarTiempoYAsistencia() {
        cout << "Gestionando tiempo y asistencia" << endl;
    }

    void gestionarSeguridadYSalud() {
        cout << "Gestionando seguridad y salud" << endl;
    }
};

int main() {
    HRSystem sistemaHR;
    int opcion;

    while (true) {
        cout << "***************************************" << endl;
        cout << "*  1. Gestion de Empleado             *" << endl;
        cout << "*  2. Gestion de Nomina               *" << endl;
        cout << "*  3. Gestion de Beneficios  *" << endl;
        cout << "*  4. Gestion de Desempeño        *" << endl;
        cout << "*  5. Salir                           *" << endl;
        cout << "***************************************" << endl;

        while (true) {
            cout << "Ingrese su opcion: ";
            cin >> opcion;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Entrada no válida. Por favor, ingrese solo números." << endl;
                continue;
            }

            if (opcion < 1 || opcion > 5) {
                cout << "Opcion no valida. Por favor, elija una opcion entre 1 y 5." << endl;
            } else {
                break;
            }
        }

        switch (opcion) {
            case 1:
                sistemaHR.gestionarEmpleados();
                break;
            case 2:
                sistemaHR.gestionarNominas();
                break;
            case 3:
                sistemaHR.gestionarTiempoYAsistencia();
                break;
            case 4:
                sistemaHR.gestionarSeguridadYSalud();
                break;
            case 5:
                cout << "Saliendo..." << endl;
                return 0;
        }
    }

    return 0;
}
