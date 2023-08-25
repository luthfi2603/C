#include <stdio.h>

int main(){
    int n = 10;

    /*printf("Masukkan nilai n : ");
    scanf("%d", &n);*/

    for(int a = 1; a <= n; a++){
        for(int x = n; x > a; x--){
            printf("  ");
        }
        for(int y = 1; y <= (2*a-1); y++){
            printf("x ");
        }
        printf("\n");
    }

    return 0;
}