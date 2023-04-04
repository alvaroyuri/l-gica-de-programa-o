/******************************************************************************

                            Online C Compiler.
for (cont=8;cont>=0;cont--)


                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int soma = 0;
    int posicao;
    int media;
    int vet [4];
    
    for (posicao=0;posicao<4;posicao++) {
    
    printf ("Digite a nota do aluno:\n");
    scanf ("%d",&vet[posicao]);
    soma = soma + vet[posicao];
}
    media = soma/4;
   printf ("A media dos alunos é %d", media);
   
   
   
    
        
    return 0;
}
