import java.util.Scanner;

public class StandarDeviasiSample {
    public static void main(String[] args) {
        
        // Cetak judul
        System.out.println("========== PROGRAM STANDAR DEVIASI SAMPLE ==========");
        System.out.println("====================================================");

        // Buat objek scanner
        Scanner scan = new Scanner(System.in);

        // Terima input size array
        System.out.print("Banyak data: ");
        int size = scan.nextInt();

        // Buat array dengan size yang diinput
        double dataArray[] = new double[size];

        // Isikan dataArray
        for(int i = 0; i < size; i++) {
            System.out.print("Masukkan data ke-" + (i + 1) + ": ");
            dataArray[i] = scan.nextDouble();
        }

        // Tutup scanner
        scan.close();

        // Jumlahkan isi dataArray
        double sum = 0;
        for(int i = 0; i < size; i++) {
            sum += dataArray[i];
        }

        // Rata-rata array
        double average = sum / size;


        // Perhitungan pembilang
        double kurang, kuadrat = 0;
        for(int i = 0; i < size; i++) {
            kurang = dataArray[i] - average;
            kuadrat += (kurang * kurang);
        }

        // Perhitungan deviasi
        double deviasi = Math.sqrt(kuadrat / (size - 1));

        // Cetak hasil
        System.out.format("Standar deviasi sample: %.2f", deviasi);
    }
}