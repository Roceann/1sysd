#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	double result ; 
	double nombre, base ;
	char operateur ; 
	operateur = argv[3][0] ;
	base = strtof(argv[1], NULL) ;
	nombre = strtof(argv[2], NULL) ;
	switch (operateur) {
		case '+' : 
			result = base +nombre ;
			break;
		case '-' : 
			result = base -nombre ;
			break;
		case '*' : 
			result = base * nombre ;
			break;
		case '/' : 
			result = base /nombre ;
			break;
	}
	printf(" le résultat de l'opération demandé est donc %lf \n", result) ;
}
