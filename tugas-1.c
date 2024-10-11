#include <stdio.h>

int main() {
    int angka1, angka2, operasi;
    int hasil;

    // Input bilangan
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &angka2);

    // Menampilkan menu operasi
    printf("\nPilih operasi yang diinginkan:\n");
    printf("1. Pertambahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Modulus\n");
    printf("Masukkan operasi (1-5): ");
    scanf("%d", &operasi);

    // Operasi bekerja
    switch (operasi) {
        case 1:
            hasil = angka1 + angka2;
            printf("Hasil pertambahan: %d + %d = %d\n", angka1, angka2, hasil);
            break;
        case 2:
            hasil = angka1 - angka2;
            printf("Hasil pengurangan: %d - %d = %d\n", angka1, angka2, hasil);
            break;
        case 3:
            hasil = angka1 * angka2;
            printf("Hasil perkalian: %d * %d = %d\n", angka1, angka2, hasil);
            break;
        case 4:
            if (angka2 != 0) {
                float hasilpembagian = (float)angka1 / angka2;
                printf("Hasil pembagian: %d / %d = %.2f\n", angka1, angka2, hasilpembagian);
            } else {
                printf("Error: Tidak boleh melakukan operasi pembagian dengan nol!.\n");
            }
            break;
        case 5:
            if (angka2 != 0) {
                hasil = angka1 % angka2;
                printf("Hasil modulus: %d %% %d = %d\n", angka1, angka2, hasil);
            } else {
                printf("Error: Tidak boleh melakukan operasi modulus dengan nol!.\n");
            }
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}
