/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
const int tamvet = 5;    
int input [tamvet], output [tamvet], cont;


for (cont=0;cont<tamvet;cont++) 
{
    
    scanf("%d", &input[cont]);
    
    if (input[cont]%2>0) {
        
        output[cont] = input [cont] -1;}
    else {
        output[cont] = input [cont] +1;}

}
for (cont=0;cont<tamvet;cont++) {
    
    printf("%d ", input[cont]);
    
}

printf("\n");

for (cont=0;cont<tamvet;cont++) {
    
    printf("%d ", output[cont]);
    
}

    return 0;
}
