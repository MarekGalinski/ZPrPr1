
#include <stdio.h>
int main()
{
    int pocet;
    int i;
    int cislo;
    float hodnota = 0;
    printf("Zadaj pocet cisel: ");
    scanf("%d", &pocet);
    
    for(i=1;i<=pocet;i++){
        printf("Zadaj %d. cislo:", i);
        scanf("%d", &cislo);
        hodnota += cislo;
    }
    
    hodnota = hodnota / pocet;
    
    printf("Priemer: %f\n", hodnota);
    
    //printf("Nacital si 3 cisla\n");
    return 0;
}
