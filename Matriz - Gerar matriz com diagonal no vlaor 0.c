/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int matriz [5][5];
int linhas, colunas;

for (linhas=0; linhas<5;linhas++) {
    
    for (colunas=0; colunas<5;colunas++) { 
    if (linhas == colunas) /*Na diagonal principal, os elementos têm linha = colona: [0][0], [1][1], [2][2], [3][3].*/
        matriz[linhas][colunas] = 0;
    else {
        printf ("\nDigite a entrada do elemento da matriz: linha: %d, coluna: %d\n", linhas, colunas);
        scanf  ("%d", &matriz[linhas][colunas]);}
      
}

}

for (linhas=0; linhas<5;linhas++) {
    printf ("\n");
    for (colunas=0; colunas<5;colunas++) { 
        printf ("%d, ", matriz [linhas][colunas]);}
}
    return 0;
}
