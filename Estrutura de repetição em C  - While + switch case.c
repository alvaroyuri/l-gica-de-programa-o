/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


/******************************************************************************
contar quantas vogais foram inseridas: a e i
*******************************************************************************/

#include <stdio.h>

int main()
{

char letra;
int conta, conte, conti;
conta = 0;
conte = 0;
conti = 0;

printf ("Digite uma das vogais A, E ou I: \n");
scanf  ("%c", &letra); 


while (letra!='.') {

printf ("Digite uma das vogais A, E ou i: \n");
scanf  ("%c", &letra); 

switch (letra) {

case 'a': conta = conta + 1 ;
break;

case 'e': conte = conte + 1 ;
break;

case 'i': conti = conti + 1 ;
break;


}
}

printf("Foi digitado %d vogais A\n", conta);
printf("Foi digitado %d vogais E\n", conte);
printf("Foi digitado %d vogais I\n", conti);
 
 


    return 0;
}
