import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {

        Scanner sc = new Scanner(System.in);

        int qtdPessoas = sc.nextInt();

        int rg, idade;
        String nome;

        Dados dados = new Dados();

        for (int i = 0; i < qtdPessoas; i++)
        {
            int rgValidado = 0;
            rg = sc.nextInt();
            while (rgValidado == 0)
            {  
                rgValidado = dados.validaRg(rg);
                rg = sc.nextInt();
            }

            nome = sc.next();
            idade = sc.nextInt();

            Pessoa p = new Pessoa(rg, nome, idade);
            dados.adicionaPessoa(p);
        }

        // Consulta de usuario
        int consultaRg;
        String tipoConsulta;

        int rodarPrograma = 1;
        while(rodarPrograma == 1)
        {
            consultaRg = sc.nextInt();
            if (consultaRg == -1) System.exit(0);

            Pessoa pessoaConsulta = dados.getPessoaPeloRg(consultaRg);
            if (pessoaConsulta.getRG() == -1) // RG não encontrado
            {
                System.out.println("RG não encontrado. Tente novamente");
            }
            else
            {
                tipoConsulta = sc.next();

                switch (tipoConsulta) {
                    case "Nome":
                        System.out.printf("%s\n", pessoaConsulta.getNome());
                        break;
                    case "Idade":
                        System.out.printf("%d\n", pessoaConsulta.getIdade());
                        break;
                    default:
                        break;
                }
            }
        }
    }
}
