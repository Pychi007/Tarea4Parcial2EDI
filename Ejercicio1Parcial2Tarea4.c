//
// Created by picha on 02/04/2022.
//
#include<stdio.h>
#include <ctype.h>
 typedef struct Tarea4Fechas
{
    int dia;
    char mes[10];
    int anio;
} fecha;
void capturaDatos(fecha *fecha1);
void imprimeDatos(fecha fecha1);
int main(){
    fecha fecha_num1;
    capturaDatos(&fecha_num1);
    imprimeDatos(fecha_num1);
}
void imprimeDatos(fecha fecha1){
    printf("%i/", fecha1.dia);
    printf("%s/", fecha1.mes);
    printf("%i",fecha1.anio);
}
void capturaDatos(fecha *fecha1){
    printf("Ingrese el dia:");
    scanf("%i", &fecha1->dia);
    printf("Ingrese el mes:");
    scanf("%s",&fecha1->mes);
    printf("Ingrese el anio:");
    scanf("%i", &fecha1->anio);
    fecha1->mes[0]= toupper(fecha1->mes[0]);
}