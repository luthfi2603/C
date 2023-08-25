#include <stdio.h>

int main(){

    int ibra;
    printf("Masukkan angka : ");
    scanf("%d", &ibra);

    if(ibra==1){
        printf("one");
    }else if(ibra==2){
        printf("two");
    }else if(ibra==3){
        printf("three");
    }else if(ibra==4){
        printf("four");
    }else if(ibra==5){
        printf("five");
    }else if(ibra==6){
        printf("six");
    }else if(ibra==7){
        printf("seven");
    }else if(ibra==8){
        printf("eight");
    }else if(ibra==9){
        printf("nine");
    }else{
        printf("grater than 9");
    }

    // int ibra = 5;
    // char ibra2 = '5';
    // if(ibra=='5'){
    //     printf("ibra");
    // }else{
    //     printf("bukan ibra");
    // }

    return 0;
}