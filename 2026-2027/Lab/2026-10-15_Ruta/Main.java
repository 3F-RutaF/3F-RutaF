import java.util.Objects;

class Squadra {
private String nome;
private int goalFatti;

// Costruttore standard
 Squadra(String nome, int goalFatti) {
this.nome = nome;
this.goalFatti = goalFatti;
}

public Squadra(Squadra altraSquadra){
    this.nome = altraSquadra.nome;
    this.goalFatti = altraSquadra.goalFatti;
}

// Getter e Setter
public String getNome() { return nome; }
public void setNome(String nome) { this.nome = nome; }
public int getGoalFatti() { return goalFatti; }
public void setGoalFatti(int goalFatti) { this.goalFatti = goalFatti; }

@Override
public boolean equals (Object o){
    if(this== o ) return true;
    if (o == null || getClass() != o.getClass()) return false;
    Squadra squadra = (Squadra) o;
    return goalFatti == squadra.goalFatti && Objects.equals(nome, squadra.nome);
}

@Override
public int hashCode(){
    return Objects.hash(nome, goalFatti);
 }
}


 public class Main {
public static void main(String[] args) {
// 1. Creiamo la squadra originale
Squadra s1 = new Squadra("Leoni", 12);

// Vogliamo creare una copia di backup (s2) della squadra s1 prima di modificare i dati
Squadra s2 = new Squadra(s1);

s2.setGoalFatti(20); // Modifichiamo i goal della "copia"

System.out.println("Goal squadra originale (s1): " + s1.getGoalFatti());
// Sorpresa: stampa 20! Abbiamo modificato inavvertitamente anche l'originale.

// Creiamo una terza squadra con gli stessi identici dati di s1
Squadra s3 = new Squadra("Leoni", 12);

System.out.println("s1 è uguale a s3? " + s1.equals(s3));
// cosa stampa? perché?
  }
 }