import java.util.List;

public class Ordenacao {

    public static void ordenaListaPessoas(List<Pessoa> pessoas) {

        // Itera sobre cada pessoas da lista
        for (int i = 0; i < pessoas.size() - 1; i++) {
            Pessoa p = pessoas.get(i);
            Pessoa pProximo = pessoas.get(i + 1);
            
            // Ordena por ordem alfabética
            String nome = p.getNome();
            String nomeProximo = pProximo.getNome();
    
            if (nome.compareTo(nomeProximo) > 0) {
                Pessoa aux = pProximo;
                pessoas.set(i + 1, p);
                pessoas.set(i, aux);
            } else if (nome.compareTo(nomeProximo) == 0) {
                // Ordena por idade
                int idade = p.getIdade();
                int idadeProximo = pProximo.getIdade();
    
                if (idade > idadeProximo) {
                    Pessoa aux = pProximo;
                    pessoas.set(i + 1, p);
                    pessoas.set(i, aux);
                } else if ( idade == idadeProximo) {
                    // Ordena por altura
                    float altura = p.getAltura();
                    float alturaProximo = pProximo.getAltura();
    
                    if (altura < alturaProximo) {
                        Pessoa aux = pProximo;
                        pessoas.set(i + 1, p);
                        pessoas.set(i, aux);
                    }
                }
            }
        }
    }
}
