/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


/******************************************************************************
Ler 3 notas de 40 alunos e informar a média e se foi aprovado
*******************************************************************************/

#include <stdio.h>

int main()
{

float nota1, nota2, nota3, media;
int cont;
cont = 0;


while (cont<3) {

printf ("Digite a primeira nota: ");
scanf  ("%f", &nota1);
printf ("Digite a segunda nota: ");
scanf  ("%f", &nota2);
printf ("Digite a terceira nota: ");
scanf  ("%f", &nota3);

media = (nota1 + nota2 + nota3)/3;

if (media >= 7) {
 printf ("Você foi aprovado com média: %f", media);}
 else { 
 printf ("Você foi reprovado com média: %f", media);}
 
 cont = cont + 1;
 
 
}

    return 0;
}
