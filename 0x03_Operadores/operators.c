#include <stdio.h>
/*

*/
int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    printf("Enter any two number: ");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (num1/num2);
    mod = num1 % num2;

    printf("Suma = %d\n",sum);
    printf("Resta = %d\n",sub);
    printf("Multiplicacion = %d\n",mult);
    printf("Division = %f\n",div);
    printf("Modulo = %d\n",mod);
}
