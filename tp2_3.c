#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5
#define M 7

void main(){
    int mt[N][M], *puntMatriz;

    puntMatriz=&mt[0][0];

    srand(time(NULL));

    for(int i = 0 ; i<N ; i++)
    {
        for(int j = 0 ; j<M ; j++)
        {
            *(puntMatriz+ i*M + j)=1+rand()%100;
            printf("mt[%d][%d]=%d ",i+1,j+1,*(puntMatriz + i*M + j));
        }
        printf("\n");
    }

}
