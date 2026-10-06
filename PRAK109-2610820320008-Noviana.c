#include <stdio.h>

int main() {
    char *pahlawan[] = {"Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"};

    int jumlah_pasukan;
    int jumlah_pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = ");
    scanf("%d", &jumlah_pasukan);

    printf("Jumlah pahlawan = ");
    scanf("%d", &jumlah_pahlawan);

    int pasukan_per_pahlawan = jumlah_pasukan / jumlah_pahlawan;

    printf("Jumlah\npasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukan_per_pahlawan);

    return 0;
}