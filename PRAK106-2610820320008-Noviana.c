#include <stdio.h>

int main() {
    int a = 4, b = 8, c = 3;

    int cek1, cek2, cek3;

    cek1 = (a == b);
    cek2 = (b > c);
    cek3 = (a != c);

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", cek1);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", cek2);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", cek3);

    return 0;
}