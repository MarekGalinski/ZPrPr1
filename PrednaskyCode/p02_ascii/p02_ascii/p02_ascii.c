//
//  main.c
//  p02_ascii
//
//  Created by Marek Galinski on 30/09/2020.
//  Copyright © 2020 Marek Galinski. All rights reserved.
//

#include <stdio.h>

int main() {
    char znak = 'A';
    
    printf("%c\n", znak);
    
    znak = znak + 1;
    printf("%c %c", znak, znak + 1);
    
    znak = '\n';
    printf("%c", znak);
    
    znak = '*';
    printf("\007Znak %c ma ASCII kod %d\n", znak, znak);
    
    return 0;
}
