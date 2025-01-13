public class Pessoa {

    private int rg;
    private String nome;
    private int idade;

    public Pessoa(int rg, String nome, int idade)
    {
        this.rg = rg;
        this.nome = nome;
        this.idade = idade;
    }

    public int getRG()
    {
        return this.rg;
    }

    public String getNome()
    {
        return this.nome;
    }

    public int getIdade()
    {
        return this.idade;
    }
}
