#include <stdio.h> 
/**
 * Este programa pide una letra
 * al usuario y la imprime en
 * la terminal
 * Return: 0 if succeed
 */
int main() 
{ 
  char letra;
  printf("Ingrese un caracter: \n"); 
  scanf("%c", &letra); 
  printf("Usted ha escrito la letra: %c\n", letra); 
  return 0; 
} 
