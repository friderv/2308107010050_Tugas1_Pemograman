#include <stdio.h>

int main() {
    int pilihan;
    int bilangan;

    printf("Pilih Jenis Konversi:\n");
    printf("Bilangan Desimal ke Biner Ketik 1\n");
    printf("Bilangan Biner ke Desimal Ketik 2\n");
    printf("Bilangan Desimal ke Octal Ketik 3\n");
    printf("Bilangan Octal ke Desimal Ketik 4\n");
    printf("Masukkan Pilihan Konversi: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &bilangan);
            int nilai_desimal, biner = 0,
                digit_biner, sepuluh_pangkat = 1;
                nilai_desimal = bilangan;
            while (nilai_desimal > 0) {
                digit_biner = nilai_desimal % 2;
                biner += sepuluh_pangkat * digit_biner;
                sepuluh_pangkat *= 10;
                nilai_desimal /= 2;
            }
            printf("Hasil konversi: %d\n", biner);
            break;
        case 2:
            printf("Masukkan bilangan biner: ");
            scanf("%d", &bilangan);
            int desimal = 0, pangkat = 0;
            while (bilangan > 0) {
                desimal += (bilangan % 10) * (1 << pangkat);
                bilangan /= 10;
                pangkat++;
            }
            printf("Hasil konversi: %d", desimal);
            break;
        case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &bilangan);
            int octal = 0, i = 1;
            while (bilangan != 0) {
                octal += (bilangan % 8) * i;
                bilangan /= 8;
                i *= 10;
            }
            printf("Hasil konversi: %d\n", octal);
            break;
        case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%d", &bilangan);
            int decimal = 0, power = 0;
            while (bilangan > 0) {
                decimal += (bilangan % 10) * (1 << (3 * power));
                bilangan /= 10;
                power++;
            }
            printf("Hasil konversi: %d", decimal);
            break;
        default:
            printf("Pilihan tidak valid.");
    }
    return 0;
}

