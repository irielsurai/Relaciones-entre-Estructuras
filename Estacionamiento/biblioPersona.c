#include "biblioPersona.h"

void hardcodearPersona (ePersona estasPersonas[], int cantidad)
{
    //ePersona es una estructura, estasPersonas (y luego persona) es un array de ePersonas hardcodeado


    int ids[] = {1,2,3,4};
    int dias [] = {33,22,25,11};
    int meses [] = {3,4,12,11};
    int anios [] = {1990,1980,2000,1995};
    char nombres [][32] = {"maria","zeke","ger","yani"};
    int i;
    for (i=0; i<cantidad; i++)
    {
        estasPersonas[i].id=ids[i];
        estasPersonas[i].fechaNac.anio=anios[i];
        estasPersonas[i].fechaNac.mes=meses[i];
        estasPersonas[i].fechaNac.dia=dias[i];
        strcpy(estasPersonas[i].nombre,nombres[i]);
    }

}

void mostrarPersona (ePersona semuestranPersonas [], int cantidad)
{
    int i;
    printf (" NOMBRE \t FECHA \n");
    for (i=0; i<cantidad; i++)
    {
        printf (" %s \t \t %02d %02d  %04d \n", semuestranPersonas[i].nombre,
                                                semuestranPersonas[i].fechaNac.dia,
                                                semuestranPersonas[i].fechaNac.mes,
                                                semuestranPersonas[i].fechaNac.anio);
    }
}

