import java.util.Scanner;

public class StandarDeviasiSample {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Banyak data: ");
        int size = scan.nextInt();

        int dataArray[] = new int[size];

        for(int i = 0; i < size; i++) {
            System.out.print("Masukkan data ke-" + (i + 1) + ": ");
            dataArray[i] = scan.nextInt();
        }

        scan.close();

        for(int i = 0; i < size; i++) {
            System.out.println("Data ke-" + (i + 1) + ": " + dataArray[i]);
        }

    }
}