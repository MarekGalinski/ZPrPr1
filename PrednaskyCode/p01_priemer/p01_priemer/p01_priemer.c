#include <stdio.h>

int sum(int pole[], int velkost);

int main() {
    
    int a,b,sucet;
    int pole[] = {1,2,3,4,5};
    
    pole[0] = 10;
    
    printf("Hodnota: %d\n",pole[0]);
    
    int velkost = sizeof(pole) / sizeof(int);
    
    
    sucet = sum(pole, velkost);
    printf("Sucet: %d\n",sucet);
    
    printf("Hodnota: %d\n",pole[0]);
    
    return 0;
}

int sum(int pole[], int velkost) {
    int sucet = 0;
    
    pole[0] = 1;
    
    printf("Hodnota: %d\n",pole[0]);
    
    for(int i = 0; i<velkost; i++){
        sucet = sucet + pole[i];
    }
    return sucet;
}
        
   





    
    
    /*
    int i=1;
    int j=4;
    int k=2;
        
    ++i;
    i++;
    k = 3 * (j+1);
    k = 4 * ++j;
    k = 2 * j++;
    i *= 3 * j--;
    k += --j;
        
    printf("%d %d %d\n", i, j, k);
        
    return 0;
}

*/
