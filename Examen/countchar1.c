#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
	printf("%d\n", count_char(argv[1], argv[2]));
}

