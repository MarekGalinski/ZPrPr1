//
//  main.c
//  p03_priklady
//
//  Created by Marek Galinski on 07/10/2020.
//  Copyright © 2020 Marek Galinski. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int rok = 1600;
    
    if (rok % 400 == 0)
        printf("Rok je prestupny.\n");
    else if (rok % 100 > 0 && rok % 4 == 0)
        printf("Rok je prestupny.\n");
    else
        printf("Rok je neprestupny.\n");
    
    return 0;
}
