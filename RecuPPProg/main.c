#include <stdio.h>
#include <stdlib.h>
#define TAM 10/*1. Crear una funci�n llamada aplicarDescuento
 que reciba como par�metro el precio de un producto y
 devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main. *

2. Crear una funci�n que se llame contarCaracteres que reciba una cadena
de caracteres como primer par�metro y un car�cter como segundo y devuelva la
cantidad de veces que ese car�cter aparece en la cadena *

3. Dada la estructura Notebook(id, procesador, marca, precio)
generar una funci�n que permita ordenar un array de dicha estructura
 por marca. Ante igualdad de marca deber� ordenarse por precio. Hardcodear datos
 y mostrarlos desde el main. **/

contarCaracteres(char cadena[],char a,int tam);
aplicarDescuento(int precio);
int main()
{
   /* char cadena[TAM]="cadena";
    char a;
    int cont;

     printf("Cantidad de veces que aparece la a en cadenas %d",cont);*/
     int precioP=100;
     aplicarDescuento(precio);
     printf("precio con descuento",precio);



    return 0;
}
contarCaracteres(char cadena[],char a,int tam){


int cont;
for(int i = 0; i <tam != "" ; ++i)
{
if (tam == a)
{
cont++;
}
}

return cont;
 printf("Cantidad de veces que aparece la a en cadenas %d",cont);
}
aplicarDescuento(int precio){

int precio ;
int descuento;
if(precioproducto){
    descuento = precio*0.5;
}
return descuento;

}
