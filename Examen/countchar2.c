#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>  

int count_char(char *ph, char *carrac) {
	int nb = 0;
	for (int i = 0; i < strlen(ph); i++) {
		if (ph[i] == carrac[0]) {
			nb++;
  		}
	}
	return nb;
}

int main(int argc, char *argv[]) {
	if (strcmp(argv[3], "-1") == 0) {
		for (int i = 0; i < strlen(argv[0]); i++) {
			argv[1][i] = toupper(argv[1][i]);
		}
		printf("%d\n", count_char(argv[0], argv[1]));
	} else {
		printf("%d\n", count_char(argv[0], argv[1]));
	}
}

