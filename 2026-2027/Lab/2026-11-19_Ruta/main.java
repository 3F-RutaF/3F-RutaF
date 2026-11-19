
class Persona{
    private String nome;
    private String indirizzo;

    public Persona(String nome, String indirizzo){

        this.nome = nome;
        this.indirizzo = indirizzo;
    }

    public String getNome() {
        return this.nome;
    }

    public String getIndirizzo() {
        return this.indirizzo;
    }

    public void Visualizza(String nome, String indirizzo){
        System.out.println("Nome: " + nome);
        System.out.println("Indirizzo: " + indirizzo);
    }
}