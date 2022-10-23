#include <stdio.h>

int main() {
    
    FILE *subor;
    char znak;
    int pocet = 0;
    
    subor = fopen("/cesta/k/suboru.txt", "r");
    
    if (subor == NULL) {
        printf("Subor neexistuje.\n");
    } else {
        while(1) {
            znak = getc(subor);
            if (znak == EOF) break;
            if (znak == 'e') pocet++;
            printf("%c",znak);
        }
    }
    printf("V subore je %d-krat e\n",pocet);
    
    return 0;
}