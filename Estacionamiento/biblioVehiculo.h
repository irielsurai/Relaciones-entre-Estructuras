#include "biblioPersona.h"


//DECLARACION DE ESTRUCTURAS
typedef struct
{
    char patente [50];
    eFecha fechaIngreso;
    int horaIngreso;
    int horaSalida;
    int idDuenio;
}eVehiculo;

// PROTOTIPOS DE FUNCIONES
void hardcodearVehiculos (eVehiculo[], int);
void mostrarVehiculo (eVehiculo[], ePersona[], int);
