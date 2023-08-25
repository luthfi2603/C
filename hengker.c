#include <stdio.h>

int main(){

    int ibra, sialan;
    float lima, satu;

    scanf("%d %d", &ibra, &sialan);
    scanf("%f %f", &lima, &satu);

    printf("%d %d\n", ibra + sialan, ibra - sialan);
    printf("%f %f", lima + satu, lima - satu);

    return 0;
}