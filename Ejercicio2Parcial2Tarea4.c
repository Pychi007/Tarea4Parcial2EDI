//
// Created by picha on 02/04/2022.
//
#include <stdio.h>
#include <math.h>
typedef struct Tarea4Puntos
{
    int x1;
    int y1;
    int x2;
    int y2;
} Puntos;
void capturaDatos(Puntos *p);
void imprimeDatos(Puntos p);
float CalculaDistancia(Puntos p);
int main(){
    float distancia;
    Puntos punto_num1;

    capturaDatos(&punto_num1);
    imprimeDatos(punto_num1);
    distancia=CalculaDistancia(punto_num1);
    printf("La distancia entre los puntos es:%f ", distancia);
}
void capturaDatos(Puntos *p){
    printf("Ingrese un punto\n");

    printf("X:\n");
    scanf("%i", &p->x1);
    printf("Y:\n");
    scanf("%i", &p->y1);
    printf("Ingrese otro punto\n");
    printf("X:\n");
    scanf("%i", &p->x2);
    printf("Y:\n");
    scanf("%i", &p->y2);
}
void imprimeDatos(Puntos p){
    printf("Punto uno: (%i,%i)\n", p.x1, p.y1);
    printf("Punto dos: (%i,%i)\n", p.x2, p.y2);
}
float CalculaDistancia(Puntos p){
    float distancia;
    distancia= sqrt(pow((p.x2-p.x1),2)-pow((p.y2-p.y1),2));
    return distancia;
}