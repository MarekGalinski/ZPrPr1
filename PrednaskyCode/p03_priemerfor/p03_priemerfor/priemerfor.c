//
//  main.c
//  p03_priemerfor
//
//  Created by Marek Galinski on 07/10/2020.
//  Copyright © 2020 Marek Galinski. All rights reserved.
//

#include <stdio.h>

int main() {
    
    double priemer, pocet, cislo, sucet;
    int  i = 0 ;
    
    printf("Zadaj kolko cisel budeme pocitat: ");
    scanf("%lf", &pocet);
    
    for ( i = 0; i < pocet; i++) {
        printf("Zadaj cislo: ");
        scanf("%lf", &cislo);
        sucet += cislo;
    }
    
    priemer =  sucet / pocet;
    
    printf("Priemer zadanych cisel je %lf\n", priemer);
    
    return 0;
}
