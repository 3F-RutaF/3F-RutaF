public static class Persona {
    private String nome;
    private String cognome;
    private int età;

    public Persona(String nome, String cognome, int età) {
        this.nome = nome;
        this.cognome = cognome;
        this.età = età;
    }
 
     public void lavoro(){
        System.out.println("sto lavorando");
     }   
     
}

public static class Studente extends Persona {
    private String università;  

    public Studente(String nome, String cognome, int età, String università) {
        super(nome, cognome, età);
        this.università = università;
    }
      @Override    
      public void lavoro(){
        System.out.println("sto studiando");
     }   
     
}

public static void main(String[] args) {
    Persona p1= new Persona("Mario","Rossi",30);
    Studente s1= new Studente("Luca","Bianchi",20,"Università di Milano");
    p1.lavoro();
    s1.lavoro();
}