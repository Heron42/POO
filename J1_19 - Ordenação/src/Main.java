import java.util.Locale;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main (String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        Locale localeUS = new Locale("en", "US");
        sc.useLocale(Locale.US); // Força o Scanner a usar ponto como separador decimal
        List<Pessoa> pessoas = new ArrayList<>();


        while (true) {
            String entrada = sc.next();
            String separador = ";";

            if (entrada == ".") break;

            String[] entradaSeparada = entrada.split(separador);
            String nome = entradaSeparada[0];
            System.out.printf("nome: %s", nome);
            int idade = Integer.parseInt(entradaSeparada[1]);
            float altura = Float.parseFloat(entradaSeparada[2]);

            Pessoa p = new Pessoa(nome, idade, altura);
            pessoas.add(p);
        }

        for (Pessoa p : pessoas) {
            System.out.printf("%s (%d anos, %.2f metros)\n", p.getNome(), p.getIdade(), p.getAltura());
        }

        // Ordenação...
    }
}
