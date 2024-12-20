import java.util.Scanner;

public class MDC {
    public static void main(String[] args) {
        int x = 0, y = 0;

        Scanner sc = new Scanner(System.in);

        x = sc.nextInt(); // Leitura de um inteiro
        y = sc.nextInt();

        while (x != y)
        {
            if (x > y)
            {
                x = x - y;
            }
            else
            {
                int aux = 0;
                aux = x;
                x = y;
                y = aux;
            }
        }

        System.out.println(x);

        sc.close(); // "Fecha" o Scanner
    }
}
