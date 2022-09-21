// priklad prevzaty od Gabriely Grmanovej ZPrPr1, FIIT STU
/* program vypocita pocet minut v hodine a minutach */

#include <stdio.h>

int main() {
    int hod, min;
    int vysledok;
    hod = 3;
    min = 45;
    vysledok = hod * 60 + min;
    printf("%d hodin a %d minut je %d minut.\n",
           hod, min, vysledok );
    return 0;
}
