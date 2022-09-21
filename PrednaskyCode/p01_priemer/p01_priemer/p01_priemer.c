// priklad prevzaty od Gabriely Grmanovej ZPrPr1, FIIT STU
/* priemer 3 cisel */

#include <stdio.h>

int main()
{
    double k, l, m;
    printf("Zadajte 3 realne cisla: ");
    scanf("%lf %lf %lf", &k, &l, &m);
    printf("\nPriemer cisel %f a %f a %f je %f.\n",
           k, l, m, (k+l+m)/3);
    return 0;
}
