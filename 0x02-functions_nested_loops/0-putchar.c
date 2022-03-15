#include <stdio.h>
#include "main.h"

/**
 *main - printing putchar
 *Description: print without using printf
 *Return:0
 */
 
int main (void){
	char word[9] = "_putchar\n";
	int i;

        for (i = 0; i < 9; i++){
	    putchar(word[i]);
	
	}
	
    return (0);
} 

