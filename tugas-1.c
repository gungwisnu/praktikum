#include <stdio.h>
#include <math.h> // Untuk fungsi floor

int is_whole_number(float num) {
    return (int)num == num; // Cek apakah bilangan merupakan bilangan bulat
}

int main() {
    float angka1, angka2, hasil;
    int operasi;
    char ulangi;

    do {
        // Menampilkan judul
        printf("===== Kalkulatorku =====\n");

        // Input bilangan
        printf("Masukkan bilangan pertama: ");
        scanf("%f", &angka1);
        printf("Masukkan bilangan kedua: ");
        scanf("%f", &angka2);

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
                printf("Hasil pertambahan: ");
                break;
            case 2:
                hasil = angka1 - angka2;
                printf("Hasil pengurangan: ");
                break;
            case 3:
                hasil = angka1 * angka2;
                printf("Hasil perkalian: ");
                break;
            case 4:
                if (angka2 != 0) {
                    hasil = angka1 / angka2;
                    printf("Hasil pembagian: ");
                } else {
                    printf("Error: Tidak boleh melakukan operasi pembagian dengan nol!.\n");
                    continue; 
                }
                break;
            case 5:
                if ((int)angka2 != 0) {
                    int hasil_modulus = (int)angka1 % (int)angka2;
                    printf("Hasil modulus: %d %% %d = %d\n", (int)angka1, (int)angka2, hasil_modulus);
                    continue; 
                } else {
                    printf("Error: Tidak boleh melakukan operasi modulus dengan nol!.\n");
                    continue; 
                }
                break;
            default:
                printf("Pilihan tidak valid.\n");
                continue;
                
        }
         if (is_whole_number(hasil)) {
            printf("%.0f\n", hasil); 
        } else {
            printf("%.2f\n", hasil);
        }
        // Jika ingin mengulang
        printf("\nIngin menggunakan kalkulator kembali? (y/n): ");
        scanf(" %c", &ulangi); 

    } while (ulangi == 'y' || ulangi == 'Y');

    printf("Terima kasih telah menggunakan kalkulator!\n");

    return 0;
}