/* Ej 11, Guia 0
 * . Defina una función que convierte una cadena de caracteres, pasada por referencia, a
mayúsculas, a excepción de la primera letra de cada palabra, que debe estar en
minúsculas. */

#include<stdio.h>
#include<string.h>
void trans(char *);

int main(){
    char texto[1000], *textoptr;
    printf("Ingrese un texto:\n");
    fflush(stdin);
    gets(texto);
    textoptr = &texto;
    trans(textoptr);
    return 0;
}
void trans(char *textoptr){
    char *palabra;
    int i;
    palabra = strtok(textoptr, " ,.;:!?");
    while(palabra!=NULL){
        for(i=1; palabra[i]!='\0'; i++){
            if(palabra[i]>=97 && palabra[i]<=122){
                palabra[i]=palabra[i]-32;
            }
        }
        if(palabra[0]>=65 && palabra[0]<=90){
            palabra[0]=palabra[0]+32;
        }
        palabra = strtok(NULL, " ,.;:!?");
    }
    printf("\nLa frase transofrmada es: ");
    puts(textoptr);
}