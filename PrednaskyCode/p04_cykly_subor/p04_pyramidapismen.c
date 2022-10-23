#include <stdio.h>

int main() {
    
    int i,j,a;
    int riadky = 15;
    
    char c;
    a = 1;
    for(i=1;i<=riadky;i++){
        c = 'A';
        for(j=0;j<riadky;j++){
            if (j<i) {
                printf("%c",c);
                c++;
            }
            else printf(".");
        }
        printf("\n");
    }
    
    printf("%d",a);
    
    return 0;
}