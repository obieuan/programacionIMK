#include <stdio.h>
/* 
*This program finds maximum between two numbers
*/

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d",&num1, &num2);

    if (num1 > num2)  // FALSE   TRUE
    {
        printf("El primer numero es mayor \n");
    }
    else if(num1 == num2)
    {
        printf("Ambos numeros son iguales \n");
    }
    else
    {
        printf("El segundo numero es mayor \n");
    }
    return 0;
}
