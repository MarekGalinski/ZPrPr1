#include <stdio.h>

int main() {
    
    int i,j,k,r,q,z;
    
    r = 2;
    q = 5;
    
    for(z=0; z<q; z++) {
        for(j = 1; j <= r+1; j++) {
            for(k=0; k<q; k++){
                for(i = 1; i <= r; i++) {
                    if(j <= i)
                        putchar('.');
                    else
                        putchar('A'+i-1);
                }
            }
            putchar('\n');
        }
    }
    
    return 0;
}
