#include <stdio.h>

int main() {
    /**
     * 0 adalah null characer itu dibutuhkan untuk string, menjadi penanda akhir dari string
     * 126 adalah ascii code untuk ~
     * 96 untuk `
     * 194 dan 176 untuk ° tapi harus disamakan encodingnya, dibuat berurutan
     * character dari 0 sampai 127 itu sama di seluruh encoding
     * setelah dari itu akan berbeda-beda setiap encoding/codepage
     * UTF-8 adalah encoding yang hampir sama di semua bahasa
     * di cmd windows codepage 437
     * jalanakan chcp 65001 di cmd untuk ubah encodingnya jadi UTF-8
     * unsigned char [] ukurannya 1 byte per index
     */
    unsigned char number[] = {126, 96, 194, 176, 0};

    /**
     * number adalah pointer ke [0] dengan tipe data unsigned char *
     * &number adalah pointer ke array dengan tipe data unsigned char (*)[5]
     * & itu adalah operator address-of
     * 
     * jika number + 1 maka alamat pointer akan pindah ke elemen berikutnya
     * tapi jika &number + 1 maka alamat pointer akan keluar dari array tersebut
     * 
     * praktik terbaiknya, kalau mau print pakai 
     * %p gunakan (void*) Type Casting ke Generic Pointer
     * tapi kalau di sini aman aja sih, tidak ada warning
     */
    printf("%s\n", number);
    printf("%s\n", &number);
    printf("%p\n", number);
    printf("%p\n", number + 1);
    printf("%p\n", &number);
    printf("%p\n", &number + 1);
    /**
     * *number adalah dereferencing, yaitu mengakses nilai dari sebuah pointer
     * pointer bisa di tambah lalu di akses dengan *
     * * itu adalah operator dereference
     */
    printf("%d\n", *number);
    printf("%d\n", *(number + 1));
    printf("%d\n", number[0]);
    /**
     * (char*) merupakan sebuah type casting
     * %c mengharapkan character tunggal misal number[0]
     * bukan mengharapkan pointer
     * %c mengharapkan ascii code dari 0 sampai 127
     * tapi karena kita memberi pointer yang merupakan angka yang besar
     * dia akan mengambil 8 bit terakhir dari angka itu, maka hasilnya bisa acak
     * dan itu merupakan sebuah undefined behavior, bisa saja langsung crash atau berhenti
     * 
     * %.2s menggunakan . itu untuk memulai spesifik presisi
     * artinya ambil hanya 2 byte untuk mencetak °
     */
    printf("%c\n", number);
    printf("%c\n", (char*)number);
    printf("%c\n", number[1]);
    printf("%.2s\n", &number[2]);
    /**
     * (void*)number untuk melihat pointer dan juga dengan %p
     */
    printf("%p\n", (void*)number);
    /**
     * sizeof() digunakan untuk mengukur sebuah variabel
     * hasilnya dalam satuan byte
     * format specifiernya yang tepat %zu katanya
     */
    printf("%zu\n", sizeof(number));

    return 0;
}