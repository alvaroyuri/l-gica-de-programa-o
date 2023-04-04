/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

int matriz [100][3], alunos, notas;

for (alunos=0; alunos<100;alunos++) {
    
    for (notas=0; notas<3;notas++) {
    matriz [alunos][notas] = 5 ;   
    
    }
    
}

printf ("%d", matriz [99][2]);

return 0;  
}
