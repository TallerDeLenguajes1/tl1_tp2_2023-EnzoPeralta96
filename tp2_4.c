#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAMA 5

char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};

struct compu{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
}typedef compu;

void cargar(compu *puntero);
void caracteristicas(compu *puntero);
void pcMasAntigua(compu *puntero);
void pcMayorVel(compu *puntero);

void main(){
    compu listaCaracteristicas[TAMA], *puntCaracteristicas;
    puntCaracteristicas = listaCaracteristicas;
    cargar(puntCaracteristicas);
    caracteristicas(puntCaracteristicas);
    pcMasAntigua(puntCaracteristicas);
    pcMayorVel(puntCaracteristicas);
}

void cargar(compu *puntero){

    srand(time(NULL));
    int indice;

    for (int i = 0; i < TAMA; i++)
    {
        puntero->anio=rand()%9 + 2015;
        puntero->cantidad=rand()%9;
        puntero->velocidad=rand()%3 + 1;
        indice=rand()%6;
        puntero->tipo_cpu=tipos[indice];
        puntero++;
    }
}

void caracteristicas(compu *puntero){
    puts("****Caracteristicas generales de las PC****");

    for (int i = 0; i < TAMA; i++)
    {
        printf("PC Nro:%d \n",i+1);
        printf("Procesador:%s \n",puntero->tipo_cpu);
        printf("Velocidad:%dGHz || Nucleos:%d \n",puntero->velocidad,puntero->cantidad);
        printf("Year:%d \n",puntero->anio);
        printf("- - - - - - - - - - - -  \n");
        puntero++;
    }
}

void pcMasAntigua(compu *puntero){
    int auxYear=2023;
    for (int i = 0; i < TAMA; i++)
    {
        if (puntero[i].anio < auxYear)
        {
            auxYear=puntero[i].anio;
        }   
    }

    for (int i = 0; i < TAMA; i++)
    {
        if (puntero->anio==auxYear)
        {
            printf("#### Pc mas antigua ####\n");
            printf("Procesador:%s \n",puntero->tipo_cpu);
            printf("Velocidad:%dGHz || Nucleos:%d \n",puntero->velocidad,puntero->cantidad);
            printf("Year:%d \n",puntero->anio);
            printf("/ / / / / / / / / / / / / /\n");
        }
        puntero++;
    }    
}

void pcMayorVel(compu *puntero){
    int auxVel=0;
    for (int i = 0; i < TAMA ; i++)
    {
        if (puntero[i].velocidad>auxVel)
        {
            auxVel=puntero[i].velocidad;
        }
    }
    
    for (int i = 0; i < TAMA; i++)
    {
        if (puntero->velocidad==auxVel)
        {
            printf("===== Pc mas veloz =====\n");
            printf("Procesador:%s \n",puntero->tipo_cpu);
            printf("Velocidad:%dGHz|| Nucleos:%d \n",puntero->velocidad,puntero->cantidad);
            printf("Year:%d \n",puntero->anio);
            printf("- _ - _ - _ - _ - _ - _ - _ - _ -\n");
        }
        puntero++;
    }
}






