#include <stdio.h>

float addition(float a, float b) {
    float hasil = a + b;

    return hasil;
}

float subtraction(float a, float b) {
    float hasil = a - b;

    return hasil;
}

float multiplication(float a, float b) {
    float hasil = a * b;

    return hasil;
}

float division(float a, float b) {
    float hasil = a/b;

    return hasil;
}

void printHasil(float angka1, float angka2, float hasil, int choice) {
     switch (choice) {
        case 1:
            printf("%f ditambah dengan %f adalah %f\n", angka1, angka2, hasil);
            break;
            
        case 2:
            printf("%f dikurang dengan %f adalah %f\n", angka1, angka2, hasil);
            break;
            
        case 3:
            printf("%f dikali dengan %f adalah %f\n", angka1, angka2, hasil);
            break;

        case 4:
            printf("%f dibagi dengan %f adalah %f\n", angka1, angka2, hasil);
            break;
            
        default:
            break;
        }
}

int main() {
    int choice;
    float angka1, angka2, hasil;
    char lagi;

    printf("Aplikasi Kalkulator\n\n");

    do {
        printf("Pilih operasi matematika!\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n");
        printf("Pilihan: ");
        scanf("%i", &choice);

        printf("Angka 1: ");
        scanf("%f", &angka1);

        printf("Angka 2: ");
        scanf("%f", &angka2);
        
        switch (choice) {
            case 1:
                hasil = addition(angka1, angka2);
                break;
            
            case 2:
                hasil = subtraction(angka1, angka2);
                break;
            
            case 3:
                hasil = multiplication(angka1, angka2);
                break;

            case 4:
                hasil = division(angka1, angka2);
                break;
            
            default:
                printf("\nPilih angka 1 sampai 4!\n\n");
                break;
            }
        
        printHasil(angka1, angka2, hasil, choice);

        printf("Apakah ingin menghitung lagi? (y/n): ");
        scanf(" %c", &lagi);
    } while (lagi != n);

    return 0;
}
