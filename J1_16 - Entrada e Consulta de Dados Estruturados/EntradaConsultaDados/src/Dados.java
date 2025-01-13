import java.util.List;
import java.util.ArrayList;

public class Dados {

    private List<Pessoa> pessoas;

    public Dados()
    {
        this.pessoas = new ArrayList<Pessoa>();
    }

    public void adicionaPessoa(Pessoa p)
    {
        this.pessoas.add(p);
    }

    public int validaRg(int rg)
    {
        for (Pessoa p : this.pessoas)
        {
            if (p.getRG() == rg) return 0; // RG se encontra na base de dados. Pedir nova entrada
        }

        return 1; // RG nao se encontra na base de dados. Pode cadastrar
    }

    public Pessoa getPessoaPeloRg(int rg)
    {
        Pessoa pessoaRetornar = new Pessoa(-1, " ", -1);

        for (Pessoa p : this.pessoas)
        {
            if (p.getRG() == rg) pessoaRetornar = p;
        }

        return pessoaRetornar;
    }
}
