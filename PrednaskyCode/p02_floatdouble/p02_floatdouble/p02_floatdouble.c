//
//  main.c
//  p02_floatdouble
//
//  Created by Marek Galinski on 30/09/2020.
//  Copyright © 2020 Marek Galinski. All rights reserved.
//

#include <stdio.h>

int main() {
    
    float  f = 3.1415926535897932384;
    double d = 3.1415926535897932384;
    
    printf("Pi: %.4f\n", f);
    printf("Pi: %.16lf\n", d);
    //printf("Pi: %g\n", d);
    
    return 0;
}
