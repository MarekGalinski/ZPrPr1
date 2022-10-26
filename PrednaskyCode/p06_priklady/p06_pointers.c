#include <stdio.h>

int main() {
    
    int i;
    int *p;
    
    p = &i;
    i = 5;
    
    printf("i: %ld\n",&p);
    printf("i: %ld\n",p);
    printf("i: %ld\n",&i);
    printf("i: %ld\n",*p);
    
    *p = 7;
    printf("i: %d\n",i);
    
    return 0;
}