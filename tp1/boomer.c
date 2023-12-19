#include<stdio.h>
#include<stdlib.h>

int main() {
    int n ;
    printf("écriver votre age :\n");
    scanf("%d", &n); 
    if (n > 42) 
    {
    	printf("ok boomer \n") ;
    }
    else 
    {
    	printf("time to learn UNIX \n");
    }
    exit(0);
}
