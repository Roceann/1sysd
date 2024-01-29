
#include<stdio.h>
#include<stdlib.h>

double celsius2fahrenheit(double val) {
    double result;
    result = ((9.0 / 5.0) * val) + 32.0;
    return result;
}

double fahrenheit2celsius(double val) {
    double result;
    result = ((val - 32.0) * 5.0) / 9.0;
    return result;
}

int main() {
    double val;
    int conv;

    printf("Quel type de conversion voulez-vous faire (1 : C à F) (2 : F à C)\n");
    scanf("%d", &conv);

    printf("Quelle valeur voulez-vous convertir\n");
    scanf("%lf", &val);  

    if (conv == 1) {  
        printf("%f\n", celsius2fahrenheit(val));
    } else if (conv == 2) {  
        printf("%f\n", fahrenheit2celsius(val));
    } else {
        printf("Type de conversion saisi invalide\n");
    }

    return 0;
}

