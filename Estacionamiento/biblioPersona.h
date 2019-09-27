#include "biblioFecha.h"


//DECLARACION DE ESTRUCTURAS
typedef struct
{
    float id;
    char nombre[12];
    eFecha fechaNac;
}ePersona;

// PROTOTIPOS DE FUNCIONES
void hardcodearPersona (ePersona[], int);
void mostrarPersona (ePersona[], int);
