static class Persona {
    private final String nome;
    private final String cognome;
    private final int eta;

    public Persona(String nome, String cognome, int eta) {
        this.nome = nome;
        this.cognome = cognome;
        this.eta = eta;
    }

    public String descrivi() {
        return "Nome: " + nome + ", Cognome: " + cognome + ", età: " + eta;
    }
}

static class Studente extends Persona {
    private String classe;
    private double media;

    public Studente(String nome, String cognome, int eta, String classe, double media) {
        super(nome, cognome, eta);
        this.classe = classe;
        this.media = media;
    }

    @Override
    public String descrivi() {
        return super.descrivi() + ", Classe: " + classe + ", Media: " + media;
    }

    public boolean Promosso() {
        return this.media >= 6;
    }
}
    public static void main(String[] args) {
        Persona p1 = new Persona("Mario", "Rossi", 45);
        Studente s1 = new Studente("Luca", "Ponnamperumage", 18, "4F", 7.5);
        Studente s2 = new Studente("Andrea", "Bartox", 17, "4BA", 5.3);

        Persona[] listaPersona = {p1, s1, s2};
        for (int i = 0; i < listaPersona.length; i++) {
            System.out.println(listaPersona[i].descrivi());
        }
        System.out.println(s1.descrivi());
        System.out.println("Promosso: " + s1.Promosso());
        System.out.println(s2.descrivi());
        System.out.println("Promosso: " + s2.Promosso());
    }