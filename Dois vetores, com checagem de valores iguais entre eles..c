/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
const int tamvet = 6, tamvet2 = 3;    
int input [tamvet], input2 [tamvet2], cont, check, achou;

printf("Digite a primeira entrada:\n");
for (cont=0;cont<tamvet;cont++) 
{
    
    scanf("%d", &input[cont]);
    
    
   
}

printf("Digite a segunda entrada:\n");
for (cont=0;cont<tamvet2;cont++) {
    
    scanf("%d", &input2[cont]);
    
}

printf("\n");

check = 0;
for (cont=0;cont<tamvet;cont++) {

    if(input[cont]==input2[check]) {
        printf ("O número %d está no vetor um.\n", input2[check]);
    }}
check = 1;
for (cont=0;cont<tamvet;cont++) {
    if(input[cont]==input2[check]) {
        printf ("O número %d está no vetor um.\n", input2[check]);
    }}
check = 2;
for (cont=0;cont<tamvet;cont++) {
    if(input[cont]==input2[check]) {
       printf ("O número %d está no vetor um.\n", input2[check]);
    }}
    
return 0;  
}
