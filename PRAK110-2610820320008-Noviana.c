#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5;
    int tinggi = 12;

    int sisi_a = tinggi;
    int sisi_c = alas;
    int sisi_b = sqrt((alas * alas) + (tinggi * tinggi));

    int keliling = sisi_a + sisi_b + sisi_c;
    int luas = 0.5 * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", sisi_a);
    printf("Sisi B = %d cm\n", sisi_b);
    printf("Sisi C = %d cm\n", sisi_c);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);

    return 0;
}