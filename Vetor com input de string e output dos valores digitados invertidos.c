/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

char nome[8];
int ind;
scanf ("%s",nome);
for (ind=8;ind>=0;ind--) {
    printf ("%c", nome[ind]);
}
    return 0;
}
