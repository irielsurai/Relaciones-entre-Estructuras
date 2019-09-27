
#include "biblioVehiculo.h"

#define CANTPERS 4
#define CANTVEHI 4


void hardcodearVehiculos (eVehiculo estosVehiculos [], int cantidad)
{
    //eVehiculo es una estructura, estosVehiculos (y luego vehiculos) es un array de eVehiculos hardcodeado

    int idDuenios[] = {1,2,2,4};
    int ingresos [] = {10,9,8,11};
    int salidas [] = {11,11,11,12};
    char patentes [][32] = {"AAA111","BBB222","AA111BB","OJ222BB"};
    //Para la fecha (todos hoy)
    int dias [] = {26,26,26,26};
    int meses [] = {9,9,9,9};
    int anios [] = {2019,2019,2019,2019};
    int i;
    for (i=0; i<cantidad; i++)
    {
        estosVehiculos[i].horaIngreso =ingresos[i];
        estosVehiculos[i].horaSalida =salidas[i];
        estosVehiculos[i].idDuenio =idDuenios[i];
        strcpy(estosVehiculos[i].patente,patentes[i]);

        estosVehiculos[i].fechaIngreso.anio=anios[i];
        estosVehiculos[i].fechaIngreso.mes=meses[i];
        estosVehiculos[i].fechaIngreso.dia=dias[i];
    }
}

void mostrarVehiculo (eVehiculo semuestranVehiculos [], ePersona estasPersonas[], int cantidad)
{
    int i;
    printf ("\n PATENTE \t FECHA \t \t INGRESO \t SALIDA \tDUENIO \n");
    for (i=0; i<cantidad; i++)
    {
        printf (" %s \t %02d/%02d/%04d \t %02d \t\t %02d ", semuestranVehiculos[i].patente,
                                                    semuestranVehiculos[i].fechaIngreso.dia,
                                                    semuestranVehiculos[i].fechaIngreso.mes,
                                                    semuestranVehiculos[i].fechaIngreso.anio,
                                                    semuestranVehiculos[i].horaIngreso,
                                                    semuestranVehiculos[i].horaSalida);
        int j;
        for (j=0;j<CANTPERS;j++)
        {
            if(semuestranVehiculos[i].idDuenio == estasPersonas[j].id)
            {
                printf ("\t\t%s\n",estasPersonas[j].nombre);
                break;
            }
        }
    }
}
