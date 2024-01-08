#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
	double sommes = 0 ;
	double temp ; 
	for (int i = 0; i < argc; i++) {
		temp = strtof(argv[i], NULL) ;
		sommes += temp; 
	}
	printf("la sommes est de %lf\n", sommes) ; 
}
