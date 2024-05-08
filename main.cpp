#include <iostream>
using namespace std;
int main() {
    //variale para el menu principal
    //variable encargada de los ciclos de repeticion
    int Opcion_Menu,Opcion_Repetir_Funcion;


    do {
    //menu principal de opciones
    cout<<"Sistema Recursos Humanos\n"<<endl;

    cout<<"¿Que desea Realizar?\n"<<endl;
    cout<<"1. Registrar empleado"<<endl;
    cout<<"2. Modificar empleado"<<endl;
    cout<<"3. Eliminar empleado"<<endl;
    cout<<"4. Control de Pagos"<<endl;
    cout<<"5. Mostrar empleados"<<endl;
    cout<<"6. Mostrar pagos por empleado"<<endl;
    cout<<"7. Salir"<<endl;

    cout << "\nEscriba su opcion" << endl;
    cin>>Opcion_Menu;


    switch (Opcion_Menu) {

        //opcion registrar
        case 1:

            //do para repetir funcion
            do {


                cout << "Ingresar Empleado\n" << endl;

                //do antierror
                do {

                    //opcion repetir funcion
                    cout << "¿desea realizar otro ingreso?\n" << endl;

                    cout << "1. si" << endl;
                    cout << "2. no\n" << endl;

                    cout << "Escriba su opcion" << endl;
                    cin>>Opcion_Repetir_Funcion;

                    //fin do antierror
                } while (Opcion_Repetir_Funcion!=1 && Opcion_Repetir_Funcion!=2);

                //fin do repetir funcion
            }while (Opcion_Repetir_Funcion==1);


            break;

        //opcion Modificar
        case 2:


            do {


                cout << "Modificar Empleado\n" << endl;

                //do antierror
                do {

                    //opcion repetir funcion
                    cout << "¿desea realizar otra Modificacion?\n" << endl;

                    cout << "1. si" << endl;
                    cout << "2. no\n" << endl;

                    cout << "Escriba su opcion" << endl;
                    cin>>Opcion_Repetir_Funcion;

                    //fin do antierror
                } while (Opcion_Repetir_Funcion!=1 && Opcion_Repetir_Funcion!=2);

                //fin do repetir funcion
            }while (Opcion_Repetir_Funcion==1);

            break;

        //opcion eliminar
        case 3:


            do {


                cout << "Eliminar Empleado\n" << endl;

                //do antierror
                do {

                    //opcion repetir funcion
                    cout << "¿desea realizar otra Eliminacion?\n" << endl;

                    cout << "1. si" << endl;
                    cout << "2. no\n" << endl;

                    cout << "Escriba su opcion" << endl;
                    cin>>Opcion_Repetir_Funcion;

                    //fin do antierror
                } while (Opcion_Repetir_Funcion!=1 && Opcion_Repetir_Funcion!=2);

                //fin do repetir funcion
            }while (Opcion_Repetir_Funcion==1);


            break;

        //opcion control de pagos
        case 4:


            do {


                cout << "Control Pagos\n" << endl;

                //do antierror
                do {

                    //opcion repetir funcion
                    cout << "¿desea realizar otra Funcion?\n" << endl;

                    cout << "1. si" << endl;
                    cout << "2. no\n" << endl;

                    cout << "Escriba su opcion" << endl;
                    cin>>Opcion_Repetir_Funcion;

                    //fin do antierror
                } while (Opcion_Repetir_Funcion!=1 && Opcion_Repetir_Funcion!=2);

                //fin do repetir funcion
            }while (Opcion_Repetir_Funcion==1);


            break;

        //opcion mostrar empleados
        case 5:

                cout << "Mostrar Empleados\n" << endl;

            break;

        //opcion mostrar pago por empleado
        case 6:

            cout << "Mostrar Empleados\n" << endl;

            break;

        //opcion salir
        case 7:

            cout << "Gracias por utilizar nuestro sistema\n" << endl;

            break;
        //antierror
        default:

            cout << "Esa no es una opcion\n" << endl;

            break;
    }


    } while (Opcion_Menu!=7);

    return 0;
}
