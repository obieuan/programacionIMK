//Write a C program to find maximum and minimum element in an array. 
#include <stdio.h>
#define MAX_SIZE 1000
int main(){
    int arr[MAX_SIZE]; //arreglo de 1000 espacios
    int N, max=0, min=0;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d numeros: ",N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    max=arr[0];//0
    min=arr[1];//6
    for(int i=0; i<N; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];//6
        }
        if(arr[i]<min)
        {
            min = arr[i];//0
        }
    }
    printf("El maximo es: %d\n",max);
    printf("El minimo es: %d\n",min);

}
