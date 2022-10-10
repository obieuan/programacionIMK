#include <stdio.h>

int main()
{
    int password = 0;

    printf("INICIO DEL PROGRAMA\n");
    do
    {        
        printf("Ingrese un password\n");
        scanf("%d",&password);
    
    } while(password!=2345);
    
    printf("FIN DEL PROGRAMA\n");
    return (0);
}
