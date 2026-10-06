#include <stdio.h>

int main() {
    float putaran = 5;
    float jarak = 14;
    float phi = 3.141592653589793;
    
    float keliling_satu_putaran = jarak / putaran;
    float jari_jari = keliling_satu_putaran / (2 * phi);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", jarak);

    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);

    return 0;
}