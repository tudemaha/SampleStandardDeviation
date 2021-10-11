#include <stdio.h>
#include <math.h>

int main() {
    // cetak judul
    printf("========== STANDAR DEVIASI SAMPLE ==========\n");
    printf("============================================\n");

    int size;                   // deklarasi size array untuk banyak data
    printf("Banyak data: ");
    scanf("%d", &size);         // terima input size

    // buat array dengan panjang size untuk menampung data
    double dataArray[size];

    // for loop untuk menerima input data sebanyak size
    for(int i = 0; i < size; i++) {
        printf("Masukkan data ke-%d: ", (i + 1));
        scanf("%lf", &dataArray[i]);
    }

    // jumlah semua data yang diinput
    double sum;
    for(int i = 0; i < size; i++) {
        sum += dataArray[i];
    }

    // rata-rata data
    double average = sum / size;

    // deklarasi kurang dan kuadrat
    double kurang, kuadrat;
    for(int i = 0; i < size; i++) {
        kurang = dataArray[i] - average;    // pengurangan data yang diinput dengan rata-rata
        kuadrat += (kurang * kurang);       // menjumlah (sigma) semua hasil yang dikurangi ke dalam variable kuadrat
    }

    // menghitung standar deviasi
    double deviasi = sqrt(kuadrat / (size - 1));

    // cetak standar deviasi sample
    printf("Standar deviasi sample: %.2f\n", deviasi);

    return 0;
}