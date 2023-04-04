/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


/******************************************************************************
Ler 15 números inteiros e apresentar o maior deles
*******************************************************************************/

#include <stdio.h>

int main()
{

int num, cont, maior;
cont = 0;
maior = 0;


printf ("Digite:"); 
scanf("%d",&num);

while (cont<3) {
    
    if (num>maior)
    maior = num;
    printf ("O número digitado foi %d\n", num);
    printf ("O maior número até agora é: %d\n", maior);
    cont = cont + 1;
    printf ("Digite um novo número:"); 
    scanf("%d",&num);
    
    
}

    return 0;
}
