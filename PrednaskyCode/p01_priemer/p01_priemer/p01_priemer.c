// priklad prevzaty od Gabriely Grmanovej ZPrPr1, FIIT STU
/* priemer 3 cisel */

#include <stdio.h>

int main() {
    
    
    float f  = 3.1415926535897932384;
    double d = 3.1415926535897932384;
    
    printf("Orig:   3.1415926535897932384\n");
    printf(" Float: %.19f\n",f);
    printf("Double: %.19lf\n",d);
    printf("Orig:   3.1415926535897932384\n");
    
    return 0;
}
    
    /*
    char a;
    printf("Zadajte znak: ");
    scanf("%c",&a);
    
    if ((a>=65) && (a<=90)) {
        a += 32;
        printf("Zmeneny znak: %c \n", a);
        
        if ((a>=97) && (a<=122)) {
            a -=32;
            printf("Zmeneny znak: %c \n", a);
        }
        
        else printf("Nezadal si pismeno!\n");
    }
    else {
        printf("Nebolo zadane velke pismeno...\n");
      
    }
        
        
        
    
    
    
    return 0;
}

/*
int main()
{
    double k, l, m;
    printf("Zadajte 3 realne cisla: ");
    scanf("%lf %lf %lf", &k, &l, &m);
    printf("\nPriemer cisel %f a %f a %f je %f.\n",
           k, l, m, (k+l+m)/3);
    return 0;
}
*/
