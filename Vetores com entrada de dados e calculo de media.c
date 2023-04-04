/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

const int tamvet = 2;
int aluno = 0, cont;
float prova1 [tamvet], prova2 [tamvet], prova3 [tamvet], soma, media;

/*inserir dados*/

for (cont=0;cont<tamvet;cont++) {

aluno++;
printf ("Aluno %d: \n", aluno);
printf ("Digite a primeira nota do aluno: \n");
scanf ("%f", &prova1[cont]);

printf ("Digite a segunda nota do aluno: \n");
scanf ("%f", &prova2[cont]);

printf ("Digite a terceira nota do aluno: \n");
scanf ("%f", &prova3[cont]);

}

/*Calcular media por prova*/


for (cont=0;cont<tamvet;cont++) {

    soma = prova1 [cont] + soma;
    
}

media = soma / tamvet;
printf ("\nA media da turma na prova 1 foi de: %.2f\n", media);

soma=0;
for (cont=0;cont<tamvet;cont++) {

    soma = prova2 [cont] + soma;
    

}

media = soma / tamvet;
printf ("A media da turma na prova 2 foi de: %.2f\n", media);

soma=0;
for (cont=0;cont<tamvet;cont++) {

    soma = prova3 [cont] + soma;

}

media = soma / tamvet;
printf ("A media da turma na prova 3 foi de: %.2f\n\n", media);


/*Calcular media por aluno*/

soma=0, aluno =0;
for (cont=0;cont<tamvet;cont++) {
    
    aluno++;
    soma = prova1 [cont] + prova2 [cont] + prova3 [cont];
    media = soma / 3;
    printf ("A media do aluno %d foi de: %.2f\n", aluno, media);
    
}

/*Calcular media da turma*/

soma=0;
for (cont=0;cont<tamvet;cont++) {
    
    
    soma = prova1 [cont] + prova2 [cont] + prova3 [cont] + soma;
    
}

media = soma / (tamvet * 3);
printf ("A media da turma foi de: %.2f\n", media);

return 0;  
}
