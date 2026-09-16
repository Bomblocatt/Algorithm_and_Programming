//buat program C yang mengevaluasi jika nilai ujian (0-100), jika lebih besar atau sama dari 85 cetak A. jika 70-84 cetak B, jika 50-69 cetak C, jika <50 cetak D
#include <stdio.h>

int main(){
    int nilai;

    printf("Masukkan nilai ujian: \n");
    scanf("%d", &nilai);
    if (nilai >= 85 && nilai <= 100) {
        printf("Nilai: %d Skor A\n", nilai);
    } else if (nilai >= 70 && nilai <= 84) {
        printf("Nilai: %d Skor B\n", nilai);
    } else if (nilai >= 50 && nilai <= 69) {
        printf("Nilai: %d Skor C\n", nilai);
    } else if (nilai >= 0 && nilai < 50) {
        printf("Nilai: %d Skor D\n", nilai);
    } else {
        printf("Nilai tidak valid!\n");
    }

    return 0;
}