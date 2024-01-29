#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
	int cpt = 2; 
	char mot[strlen(argv[1])], mfinal[strlen(argv[1])]; 
	for (int i = 0; i < strlen(argv[1]); i++) {
	        int y = 0;
		if ((argv[1][i]) == " " ) {
	            mfinal[strlen(argv[1]) - cpt] = mot[y];
	            mot[y] = '\0';
	            cpt++;
	        } else {
	            mot[y] = argv[1][i];
	            y++;
	        }
	}

	strcpy(mfinal, mot);

	printf("%s\n", mfinal);

}

