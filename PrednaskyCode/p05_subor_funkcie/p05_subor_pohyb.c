#include <stdio.h>

int main() {
    
    FILE *subor;
    char znak;
    int pocet = 0;
    int kdesom;
    
    subor = fopen("/cesta/k/suboru.txt", "r");
    
    znak = getc(subor);
    printf("%c\n",znak);
    
    fseek(subor, 5, SEEK_SET);
    
    znak = getc(subor);
    printf("%c\n",znak);
    
    fseek(subor, -2, SEEK_CUR);
    
    znak = getc(subor);
    printf("%c\n",znak);
    
    fseek(subor, 0, SEEK_END);
    kdesom = ftell(subor);
    printf("%d\n",kdesom);
    
    return 0;
}