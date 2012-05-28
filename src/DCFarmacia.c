/*
 ============================================================================
 Name        : DCFarmacia.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Produto.h"

int main(void) {
	int n=1;
    
	teste(&n);
	printf("%d",n); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
