/* Program Umur*/
#include <stdio.h>
#include <time.h>

int main(){
    // Variabel
    int tgl, tgla, bln, blna, thn, thna, tk, i;
    blna = 0;
    tgla = 0;

    // Waktu
    time_t t;
    struct tm* current_time;
    t = time(NULL);
    current_time = localtime(&t);

    // Minta input tanggal lahir
    printf("Tanggal saat ini: %d-%d-%d\n", (current_time->tm_mday), (current_time->tm_mon + 1),(current_time->tm_year + 1900));
    printf("Masukkan tanggal lahir anda (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &tgl, &bln, &thn);


    //Jika salah input
    if(tgl < 1 || tgl >31){
        printf("Tanggal tersebut tidak ada\n");
    }else if(bln < 1 || bln > 12){
        printf("Bulan tersebut tidak ada\n");
    }else if (bln == 4 && tgl == 31 || bln == 6 && tgl == 31 || bln == 9 && tgl == 31 || bln == 11 && tgl == 31){
        printf("Bulan tersebut hanya memiliki tanggal sampai 30\n");
    }else if (bln == 2 && bln % 4 == 0 && tgl > 29){
        printf("Bulan tersebut hanya memiliki tanggal sampai 29 (kabisat)\n");
    }else if (bln == 2 && bln % 4 != 0 && tgl > 28){
        printf("Bulan tersebut hanya memiliki tanggal sampai 28\n");
    }else if (thn > (current_time->tm_year + 1900)){
        printf("Tahun tersebut melebihi tahun saat ini");
    }else if (thn <= 1945 && thn >= 0){
        printf("Anda tua");
    }else if (thn < 0){
        printf("Tahun tersebut tidak ada");
    }else { //Jika benar
        // Fungsi tahun
        if (bln < (current_time->tm_mon + 1)){
            thna = (current_time->tm_year + 1900) - thn;
        }else if (bln > (current_time->tm_mon + 1)){
            thna = (current_time->tm_year + 1900) - thn - 1;
        }else if (bln == (current_time->tm_mon + 1)){
            if (tgl <= (current_time->tm_mday)){
                thna = (current_time->tm_year + 1900) - thn;
            }else if (tgl > (current_time->tm_mday)){
                thna = (current_time->tm_year + 1900) - thn - 1;
            }
        } 

        //Fungsi tahun kabisat
        for (i = thn, tk = 0; i < (current_time->tm_year + 1900); i++){
            if (i % 4 == 0){
                tk += 1;
            }else{
                continue;
            }
        }

        //Fungsi bulan
        if (tgl > (current_time->tm_mday)){
            if ((current_time->tm_mon + 1) < bln){
                for (i = bln; i < (current_time->tm_mon + 1 + 12); i++){
                    blna += 1;
                }
            }else if ((current_time->tm_mon + 1) > bln) {
                for (i = bln; i < (current_time->tm_mon + 1); i++){
                    blna += 1;
                }
            }else if ((current_time->tm_mon + 1) == bln) {
                blna = 12;
            }
            blna -= 1;
        }else if (tgl <= (current_time->tm_mday)){
            if ((current_time->tm_mon + 1) < bln){
                for (i = bln; i < (current_time->tm_mon + 1 + 12); i++){
                    blna += 1;
                }
            }
            else if ((current_time->tm_mon + 1) > bln) {
                for (i = bln; i < (current_time->tm_mon + 1); i++){
                    blna += 1;
                }
            }
            else if ((current_time->tm_mon + 1) == bln) {
                blna = 0;
            }
        }


        //Fungsi tanggal
        if (tgl < (current_time->tm_mday)){
            for (i = tgl; i < (current_time->tm_mday); i++){
                tgla += 1;
            }
        }else if (tgl > (current_time->tm_mday)){
            if ((current_time->tm_mon + 1) == 2 || (current_time->tm_mon + 1) == 4 || (current_time->tm_mon + 1) == 6 || (current_time->tm_mon + 1) == 8 || (current_time->tm_mon + 1) == 9 || (current_time->tm_mon + 1) == 11 || (current_time->tm_mon + 1) == 1){
                for (i = tgl; i < (current_time->tm_mday + 31); i++){
                tgla += 1;}
            }else if ((current_time->tm_mon + 1) == 5 || (current_time->tm_mon + 1) == 7 || (current_time->tm_mon + 1) == 10 || (current_time->tm_mon + 1) == 12){
                for (i = tgl; i < (current_time->tm_mday + 30); i++){
                tgla += 1;}
            }else if ((current_time->tm_mon + 1) == 3){
                if ((current_time->tm_year + 1900) % 4 == 0){
                    for (i = tgl; i < (current_time->tm_mday + 29); i++){
                    tgla += 1;}
                }else if ((current_time->tm_year + 1900) % 4 != 0){
                    for (i = tgl; i < (current_time->tm_mday + 28); i++){
                    tgla += 1;}
                }
            }
        }
        
        //Output umur
        printf("Umur anda sekarang: %d tahun, %d bulan, %d hari.\nTelah melewati %d tahun kabisat.", thna, blna, tgla, tk);
    }

	return 0;
}