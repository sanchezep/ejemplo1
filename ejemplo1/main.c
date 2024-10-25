/*
 * main.c
 *
 *  Created on: 25 oct 2024
 *      Author: sanchezep
 */


#include <stdio.h>

/*
 * Funcion ejemplo
 */

float calcula(int n) {
	const float p=3.14;
	float ret=0;

	for(int i=0; i< n; i++) {
		ret += p;
	}
	return ret;
}

int main(int narg, char *arg[]) {
	printf(" Hola %d \n", narg);
	float r=calcula(33);
	printf(" calcula = %f\n", r);
	return 0;
}
