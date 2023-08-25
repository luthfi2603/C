#include <stdio.h>

int main(){

    int a = 1;
    int *aptr = &a;

    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", *aptr);

    return 0;
}