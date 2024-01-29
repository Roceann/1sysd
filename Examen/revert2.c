#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
	char mot[strlen(argv[0])]; 
	for (i =strlen(argv[0]-1; i =0; i--) {
		if (argv(i) = " ") { 
			printf("%s\n", mot) 
			mot[] = "\0" 
		}else {
			mot[] += argv[i] ;
		}
	}

}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {

	int len = strlen(argv[1]);
	char mot[len + 1];  
	int j = 0;

	for (int i = len - 1; i >= 0; i--) {
		if (argv[1][i] == ' ' || i == 0) {
 			if (i == 0) {
				mot[j] = argv[1][i];
				 j++;
			}
			mot[j] = '\0';
			printf("%s\n", mot);
			j = 0;
		} else {
			mot[j] = argv[1][i];
			j++;
		}
	}

}

