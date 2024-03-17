#include <stdio.h>

int main() {
    int tahun;
    printf("Masukkan tahun (hanya 4 digit): ");
    scanf("%d", &tahun);

    if (tahun < 1000 || tahun > 9999) {
        printf("Input tidak valid. Masukkan tahun yang terdiri dari 4 digit angka.\n");
        return 1; 
    }
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        printf("%d adalah tahun kabisat.\n", tahun);
    } else {
        printf("%d bukan tahun kabisat.\n", tahun);
    }
    return 0;
}