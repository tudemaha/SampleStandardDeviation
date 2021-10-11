#include <stdio.h>
#include <math.h>

int main() {
    printf("========== STANDAR DEVIASI SAMPLE ==========\n");
    printf("============================================\n");

    int size;
    printf("Banyak data: ");
    scanf("%d", &size);

    int dataArray[size];

    for(int i = 0; i < size; i++) {
        printf("Masukkan data ke-%d: ", size);
        scanf("%lf", dataArray[i]);
    }

    double sum;
    for(int i = 0; i < size; i++) {
        sum += dataArray[i];
    }

    double average = sum / size;


    double kurang, kuadrat;
    for(int i = 1; i < size; i++) {
        kurang = dataArray[i] - average;
        kuadrat += (kurang * kurang);
    }

    double deviasi = sqrt(kuadrat / (size - 1));

    printf("Standar deviasi sample: %.2f\n", deviasi);

    return 0;
}