/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int matriz [3][4] = {{1,1,1,1}, {5,6,7,8}, {9,10,11,12}};
int contp = 0, conti = 0, linhas, colunas;

for (linhas=0; linhas<3;linhas++) {
    
    for (colunas=0; colunas<4;colunas++) { 
    if (matriz [linhas][colunas] % 2 > 0) 
        
        conti++;
    else 
        contp++;
      
}

}

printf ("A matriz possui %d números pares e %d números ímpares", contp, conti);

    return 0;
}
