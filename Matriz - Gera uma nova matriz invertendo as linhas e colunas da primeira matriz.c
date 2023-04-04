/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int matriz1 [4][4], matriz2 [4][4];
int linhas, colunas;


/*Gera a primeira matriz*/
for (linhas=0; linhas<4;linhas++) {
    
    for (colunas=0; colunas<4;colunas++) { 
        printf ("\nDigite a entrada do elemento da matriz: linha: %d, coluna: %d\n", linhas, colunas);
        scanf  ("%d", &matriz1[linhas][colunas]);}
      
}

/*Gera a segunda matriz*/
for (linhas=0; linhas<4;linhas++) {
    
    for (colunas=0; colunas<4;colunas++) { 
        matriz2 [colunas][linhas] = matriz1 [linhas][colunas];}


}


/*Exibe a primeira matriz*/

for (linhas=0; linhas<4;linhas++) {
    printf ("\n");
    for (colunas=0; colunas<4;colunas++) { 
        printf ("%d, ", matriz1 [linhas][colunas]);}
        
}


/*printf ("%d,%d,%d,%d\n", matriz[0][0],matriz[0][1], matriz[0][2], matriz[0][3]);
printf ("%d,%d,%d,%d\n", matriz[1][0],matriz[1][1], matriz[1][2], matriz[1][3]);
printf ("%d,%d,%d,%d\n", matriz[2][0],matriz[2][1], matriz[2][2], matriz[2][3]);
printf ("%d,%d,%d,%d\n", matriz[3][0],matriz[3][1], matriz[3][2], matriz[3][3]);*/


/*Exibe a segunda matriz*/


for (linhas=0; linhas<4;linhas++) {
    printf ("\n");
    for (colunas=0; colunas<4;colunas++) { 
        printf ("%d, ", matriz2 [linhas][colunas]);}
        
}
        
    return 0;
}
