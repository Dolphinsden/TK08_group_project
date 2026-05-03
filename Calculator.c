#include <stdio.h>

float addition(float a, float b) {}

float subtraction(float a, float b) {}

float multiplication(float a, float b) {}

float division(float a, float b) {}

void printHasil(float a) {}

int main() {
    int choice;
    float angka1, angka2;

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
                addition(angka1, angka2);
                break;
            
            case 2:
                subtraction(angka1, angka2);
                break;
            
            case 3:
                multiplication(angka1, angka2);
                break;

            case 4:
                division(angka1, angka2);
                break;
            
            default:
                printf("\nPilih angka 1 sampai 4!\n\n");
                break;
            }
    } while (1);

    return 0;
}