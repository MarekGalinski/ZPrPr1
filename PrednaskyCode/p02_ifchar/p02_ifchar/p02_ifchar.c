//
//  main.c
//  p02_ifchar
//
//  Created by Marek Galinski on 30/09/2020.
//  Copyright © 2020 Marek Galinski. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int c;
    
    printf("Ahoj\n");
    
    
    
    if ( (c = getchar()) >= 'A' && c <= 'Z' ) {
        printf("%d\n", c);
        printf("%d\n", c);
    }
    else
        printf("Znak %c nie je velke pismeno.\n", c);
    //printf("%d", c);
    
    return 0;
}
