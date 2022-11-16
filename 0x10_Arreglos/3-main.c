//Write a C program to print all negative elements in an array.
#include <stdio.h>
#define MAX_SIZE 1000
int main(){
    int arr[MAX_SIZE]; //arreglo de 1000 espacios
    int N;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d numeros: ",N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i =0; i<N; i++)
    {
        if(arr[i]<0)
        {
            printf("Elemento arr[%d]: %d es negativo\n",i,arr[i]);
        }
    }
}
