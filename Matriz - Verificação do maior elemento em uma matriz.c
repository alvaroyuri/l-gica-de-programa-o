/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
const int size = 3;
int matriz [size][size];
int row, col, max = 0;


/*Gera a primeira matriz*/
for (row=0; row<size;row++) {
    
    for (col=0; col<size;col++) { 
        printf ("\nDigite a entrada do elemento da matriz: linha: %d, coluna: %d\n", row, col);
        scanf  ("%d", &matriz[row][col]);
        
        if (matriz[row][col] > max) {
         
         max = matriz[row][col];
            
        }
        }

}


/*Exibe a matriz e o resultado*/
for (row=0; row<size;row++) {
    printf ("\n");
    for (col=0; col<size;col++) { 
        printf ("%d, ", matriz [row][col]);}
}

printf ("\n\nO maior valor da matriz é %d\n", max);


/*Checa os valores iguais e exibe*/

for (row=0; row<size;row++) {
    
    for (col=0; col<size;col++) { 
      
       if (matriz[row][col] == max) {
         
         printf ("\nO elemento da linha: %d, coluna: %d é igual ao maior elemento da matriz.\n", row, col);}
            
        }
}

    return 0;
}
