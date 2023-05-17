/**
 * @file main.c
 * @brief Ejemplo de primer Doxygen con enlace a contenido externo.
 * En este ejemplo se muestra cómo incluir un enlace a contenido externo en Doxygen.
 * Puedes consultar la \link https://www.1001problemas.com página de problemas de Lenguaje C \endlink
 * para encontrar ejercicios y soluciones en C.
 * @author Domingo Pérez
 * @date 19/03/2023
 */

#include <stdio.h>

int main() {
   //Se declara una variable de nombre "num1" de tipo entero (int), y se le asigna el valor entero 1
   int num1 = 1;
   //Imprime en pantalla el valor de la variable "num1"
   printf("El valor de 'num1' (int) es %d\n", num1);

   //Se declara una variable de nombre "num2" de tipo flotante (float), y se le asigna el valor entero 3.54321
   float num2 = 3.54321;
   //Imprime en pantalla el valor de la variable "num2"
   printf("El valor de 'num2' (float) es %.2f\n", num2);

   //Se declara una variable de nombre "caracter" de tipo caracter (char), y se le asigna el valor entero 'a'
   char caracter = 'a';
   //Imprime en pantalla el valor de la variable "caracter"
   printf("El valor de 'caracter' (char) es %c\n", caracter);







   //Espera que el usuario ingrese un valor por teclado
   getchar();
   return 0;
}