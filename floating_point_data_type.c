#include <stdio.h>

int main() {
    /**
     * Compiler akan otomatis menaikkan tipe data ke presisi paling tinggi
     * misal ada float tapi di operasi setelah = nya ada 2 int, maka nilainya
     * akan tetap jadi int, makanya harus kita ubah 1 atau keduanya biar naik
     * presisinya
     */
    float varFloat = 1.0f / 3;
    printf("Default float   : %f\n", varFloat);
    printf("20 digit float  : %.20f\n", varFloat);
    
    double varDouble = 1.0 / 3;
    printf("Default double  : %lf\n", varDouble);
    printf("20 digit double : %.20lf", varDouble);

    return 0;
}