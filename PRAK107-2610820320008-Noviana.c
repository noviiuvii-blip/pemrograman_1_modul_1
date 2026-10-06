#include <stdio.h>

int main() {
    int s1 = 4, s2 = 5, s3 = 7;
    int harga_per_meter = 85000;
    int keliling = s1 + s2 + s3;
    int total_biaya = keliling * harga_per_meter;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", s1, s2, s3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga_per_meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", total_biaya);

    return 0;
}