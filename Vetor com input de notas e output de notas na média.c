/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

const int tamvet = 6;
float notas [tamvet];
float media, soma=0;
int cont;


for (cont=0;cont<tamvet;cont++) {
    scanf ("%f", &notas[cont]);
    soma = soma + notas[cont];
}

media = soma/tamvet;

printf ("\nA média é: %f\n", media);

for (cont=0;cont<tamvet;cont++) {
    
     if (notas[cont] >= media) {
      
     printf ("\nA nota %.2f está na média da turma, média: %.2f\n", notas[cont], media); 
    }
}

    return 0;
}
