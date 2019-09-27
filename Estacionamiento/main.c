#include <stdio.h>
#include <stdlib.h>

#include "biblioFecha.h"
#include "biblioPersona.h"
#include "biblioVehiculo.h"

#define CANTPERS 4
#define CANTVEHI 4



// MAIN
int main()
{
    ePersona persona [CANTPERS];
    //eFecha fechas [CANTPERS];
    eVehiculo vehiculos [CANTVEHI];

    hardcodearPersona (persona, CANTPERS);
    mostrarPersona (persona, CANTPERS);
    hardcodearVehiculos (vehiculos, CANTVEHI);
    mostrarVehiculo (vehiculos, persona, CANTVEHI);

    printf("\n\t Hello world!\n");
    return 0;
}



/*
LO PROXIMO Y AUN NO LLEGUE A PROBRAR

pedir datos por id


*/



/*

LO QUE NO PIDIERON HACER PERO ANDA


Este es el contenido del main para probar la
toma de un dato cuando persona es una estructura
y no un array de estructuras.

ePersona persona;
    printf ("nombre:");
    fflush(stdin);
    gets (persona.nombre);
    //persona.fechaNac
    printf ("\n\n El nomnre es %s \n\n", persona.nombre);

    */
