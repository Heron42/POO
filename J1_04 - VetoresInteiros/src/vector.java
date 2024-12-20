import java.util.Scanner;

// Programa que analisa as características de um vetor de inteiros
public class vector {
    public static void main(String[] args) throws Exception {

        int vector[] = new int[10]; // vector de inteiros com 10 posições

        Scanner scanner = new Scanner(System.in);

        for (int i = 0; i < vector.length; i++) 
        {
            vector[i] = scanner.nextInt();
        }

        // Leitura do número x;
        int x = scanner.nextInt();

        // Dois números inteiros indicando as posições do vetor com a maior distância entre seus valores
        int pos1 = 0, pos2 = 1;

        // Maior distância entre os valores consecutivos do vetor
        int maxDistance = 0;

        for (int i = 0; i < vector.length - 1; i++)
        {
            int distance = Math.abs(vector[i] - vector[i + 1]); // Math.abs() retorna o valor absoluto de um número

            if (distance > maxDistance)
            {
                maxDistance = distance;
                pos1 = i;
                pos2 = i + 1;
            }
        }

        System.out.print(pos1 + " " + pos2 + " ");

        // Verifica se o vetor está em ordem crescente, decrescente ou não ordenado
        int vectorOrder = 0; // 0 - não ordenado, 1 - crescente, 2 - decrescente

        for (int i = 0; i < vector.length - 1; i++)
        {
            if (vector[i] < vector[i + 1])
            {
                if (vectorOrder == 2) // Tava decrescente e agora tá crescente
                {
                    vectorOrder = 0; // Vetor desordenado
                    break;
                }

                vectorOrder = 1;
            }
            else if (vector[i] > vector[i + 1])
            {
                if (vectorOrder == 1) // Tava crescente e agora tá decrescente
                {
                    vectorOrder = 0; // Vetor desordenado
                    break;
                }
                vectorOrder = 2;
            }
        }

        switch (vectorOrder) {
            case 1:
                System.out.print("Crescente ");
                break;
            case 2:
                System.out.print("Decrescente ");
                break;
            case 0:
                System.out.print("Nao ordenado ");
                break; 
            default:
                break;
        }

        // Três números inteiros indicando quantos números são maiores que X, menores que X e iguais a X, respectivamente
        int greater = 0, less = 0, equal = 0;

        for (int i = 0; i < vector.length; i++)
        {
            if (vector[i] < x)
            {
                less++;
            }
            else if (vector[i] > x)
            {
                greater++;
            }
            else
            {
                equal++;
            }
        }

        System.out.println(greater + " " + less + " " + equal);
        scanner.close();
    }
}
