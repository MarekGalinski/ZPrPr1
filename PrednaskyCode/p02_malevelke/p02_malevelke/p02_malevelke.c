//
//  main.c
//  p02_malevelke
//
//  Created by Marek Galinski on 30/09/2020.
//  Copyright © 2020 Marek Galinski. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int c;
    
    printf("Zadajte male pismeno: ");
    c = getchar();
    c = c - 'a' + 'A';
    
    printf("Velke pismeno je: %c\n", c);
    
    return 0;
}
