#include <stdio.h>


int main()
{
    int N;
    printf("Ingrese el numero de filas:\n");
    scanf("%d",&N);

    for(int i=1;i<=N;i++)
    {        
        for(int j=1;j<=N;j++)
        {
            if (j==1 || j == N || i == 1 || i == N)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    return (0);
}
