#include <stdio.h>

int main(){
    char lista1[] = {'a','b', 'c', 'd'};
    char lista2[] = {'1', '2', '3', '4'};
    for(int m = 0; m < 4; m++){
        for(int n = 0; n < 4; n++){
            printf("%c%c   ", lista1[m], lista2[n]);
        } printf("\n");
}  
 return 0;
}