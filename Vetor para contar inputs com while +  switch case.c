/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int contador [5] = {0,0,0,0,0};
char input;

printf ("Digite uma letra:\n");

while (input != 'z'){

scanf ("%c", &input);

switch (input) {
    
    case 'a': contador [0]++;
    break;    
    
    case 'e': contador [1]++;
    break;    
    
    case 'i': contador [2]++;
    break;    
    
    case 'o': contador [3]++;
    break;    
    
    case 'u': contador [4]++;
    break;    
    
}
}

printf ("\nFoi digitado a vogal A %d vezes\n", contador[0]);
printf ("Foi digitado a vogal E %d vezes\n", contador[1]);
printf ("Foi digitado a vogal I %d vezes\n", contador[2]);
printf ("Foi digitado a vogal O %d vezes\n", contador[3]);
printf ("Foi digitado a vogal U %d vezes\n", contador[4]);

    return 0;
}
