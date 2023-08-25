#include <stdio.h>

int main(){

    int ibra, ibra2;
    scanf("%d", &ibra);

    // for(int ibra3; ibra2 < 1; ibra3++){
    //     printf("%d", ibra3);
    //     break;
    // }

    ibra2 = 0;
    while(ibra > 0){
        ibra -= 5;
        ibra2 += 1;
    }

    printf("%d", ibra2);
    return 0;
}