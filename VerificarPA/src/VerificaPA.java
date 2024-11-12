import java.util.Scanner;

// Programa verifica progressão aritmética
public class VerificaPA {
    public static void main(String[] args) throws Exception {
        int inicio = 0, razao = 0, numAnterior = 0, numAtual;
        boolean ehPA = true; 

        Scanner input = new Scanner(System.in);

        for (int i = 0; i < 10; i++)
        {
            numAtual = input.nextInt();
            if (i == 0) inicio = numAtual; // Primeiro valor da PA

            if (i == 1) razao = numAtual - numAnterior; // Pega a razao

            if (i > 0 && (numAtual - numAnterior) != razao) // Razão mudou, por isso não é PA
            {
                ehPA = false;
                break;
            }

            numAnterior = numAtual;
        }

        if (ehPA) System.out.println("Sim" + " " + inicio + " " + razao);
        else System.out.println("Nao");
        
        input.close();
    }
}
