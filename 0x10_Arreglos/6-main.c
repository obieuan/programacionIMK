//Write a C program to find second largest element in an array
#include <stdio.h>
#define MAX_SIZE 1000
int main(){
    int arr[MAX_SIZE]; //arreglo de 1000 espacios
    int N, max=0, max2=0;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d numeros: ",N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }


    // 2 4 3 5 7 4

    //7
    //
    for(int i=0; i<N; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    for(int i=0; i<N; i++)
    {
        if(max2 < arr[i] && arr[i] != max)
        {
            max2 = arr[i]; //5
        }
    }
    printf("El maximo es: %d\n",max);
    printf("El segundo maximo es: %d\n",max2);

}
