/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

int numero [10];
int cont;

for (cont=0;cont<=9;cont++) {
    scanf ("%d", &numero[cont]);
}

for (cont=9;cont>=0;cont--) {
    printf ("%d, ", numero[cont]);
}

    return 0;
}
