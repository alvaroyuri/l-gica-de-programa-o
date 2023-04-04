/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int matriz [4][4];
int linhas, colunas;

for (linhas=0; linhas<4;linhas++) {
    
    for (colunas=0; colunas<4;colunas++) { 
    if (linhas == colunas) /*Na diagonal principal, os elementos têm linha = colona: [0][0], [1][1], [2][2], [3][3].*/
        matriz[linhas][colunas] = 0;
    else {
        printf ("\nDigite a entrada do elemento da matriz: linha: %d, coluna: %d\n", linhas, colunas);
        scanf  ("%d", &matriz[linhas][colunas]);}
      
}

}

printf ("%d,%d,%d,%d\n", matriz[0][0],matriz[0][1], matriz[0][2], matriz[0][3]);
printf ("%d,%d,%d,%d\n", matriz[1][0],matriz[1][1], matriz[1][2], matriz[1][3]);
printf ("%d,%d,%d,%d\n", matriz[2][0],matriz[2][1], matriz[2][2], matriz[2][3]);
printf ("%d,%d,%d,%d\n", matriz[3][0],matriz[3][1], matriz[3][2], matriz[3][3]);

    return 0;
}
