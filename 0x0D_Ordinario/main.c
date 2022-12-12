#include <ctype.h>   // toupper
#include <time.h>
#include <stdio.h>   // printf, scanf
#include <stdlib.h>  // rand
#include <unistd.h>  // getpid

// Cosas que puedes modificar c:
#define COLUMNAS 7
#define FILAS 7
#define CASILLA_OCULTA ' '
#define MINA 'X'
#define CANTIDAD_MINAS 9  // Si colocas más minas que la cantidad de espacios disponibles (COLUMNAS * FILAS), fallará

// Cosas que no tendrías que modificar a menos que quieras adaptarlo a tus ideas :v
void generarMinas(char minas[FILAS][COLUMNAS])
{
    int x = 0, y = 0;    
    for (int i = 0; i < CANTIDAD_MINAS; i++)
    {
        x = (rand() % (FILAS - 1));
        y = (rand() % (COLUMNAS - 1));        
        minas[x][y] = MINA;
    }
}

void imprimirTablero(char tablero[FILAS][COLUMNAS])
{
    char marcadorF = 'A';
    int marcadorC = 0;
        //imprimir tablero
    printf("  ");
    for (int i = 0; i<COLUMNAS;i++)
    {
         printf(" %i ", marcadorC);
         marcadorC++;
    }
    printf("\n");
    for (int i = 0; i<FILAS;i++)
    {
        printf("%c ", marcadorF);
        for (int j = 0; j<COLUMNAS; j++)
        {
            printf("[%c]",tablero[i][j]);
        }        
         printf("\n");
         marcadorF++;
    }   
}

void inicializarTablero(char tablero[FILAS][COLUMNAS])
{
    for (int i = 0; i<FILAS;i++)
    {
        for (int j = 0; j<COLUMNAS; j++)
        {
           tablero[i][j] = CASILLA_OCULTA;
        }
    }   
}

int main()
{
    srand(time(NULL));              // Inicializa los números aleatorios para que siempre varíe el orden de las minas

    char tablero[FILAS][COLUMNAS];

    inicializarTablero(tablero);     // Inicializar tablero con espacios   
    generarMinas(tablero);           // Aquí se generan aleatoriamente las minas

    imprimirTablero(tablero);        // Esta Función imprime el tablero, solo le pasas el arreglo que quieras imprimir de tamaño FILAS, COLUMNAS

}
