#include <stdio.h>
#include <time.h>

int main(){

    int tanggal, bulan, tahun, tanggal2, bulan2, tahun2, kabisat, i;

    struct tm* current_time;
    time_t waktu;
    waktu = time(NULL);
    current_time = localtime(&waktu);

    printf("%d-%d-%d\n", (current_time->tm_mday), (current_time->tm_mon + 1), (current_time->tm_year + 1900));

    printf("Masukkan tanggal lahir anda (dd-mm-yyyy) : ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);

    if(bulan > current_time->tm_mon){
        tahun2 = (current_time->tm_year + 1900) - tahun - 1;
    }else if(bulan <= current_time->tm_mon){
        tahun2 = (current_time->tm_year + 1900) - tahun;
    }

    printf("Umur anda : %d", tahun2);

    return 0;
}