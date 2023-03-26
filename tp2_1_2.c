#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20

    void main(){
    
    int i;
    double vt[N], *punteroVt;

    punteroVt = vt;

    srand(time(NULL));

    for(i = 0;i<N; i++)
    {
        (*punteroVt)=1+rand()%100;
        printf("vt[%d]=%.2f\n",i+1,*punteroVt);
        punteroVt++;
    }
    
}