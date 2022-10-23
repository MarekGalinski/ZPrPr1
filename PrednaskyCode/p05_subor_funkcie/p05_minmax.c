#include <stdio.h>

int minmax(char c, int a, int b);

int main() {
    
    int a,b,vysledok;
    
    a=9;
    b=7;
    
    vysledok=minmax(a,b,'A');
    
    printf("Vysledok: %d\n",vysledok);
    
    return 0;
}

int minmax(char c, int a, int b) {
    
    printf("%c\n",c);
    printf("%d\n",a);
    printf("%d\n",b);
    
    if (c=='A')
        return (a > b ? a : b);
    else if (c=='B')
        return (a > b ? b : a);
    else
        return 0;

}