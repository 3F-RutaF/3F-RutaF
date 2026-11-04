class TracciaAudio {

    protected String nome;
    protected double durata;

    public TracciaAudio(String nome, double durata) {
        this.nome = nome;
        this.durata = durata;
    }

    public String show() {
        return "Nome: " + nome + " | Durata: " + durata; 
    }
}

class Canzone extends TracciaAudio {

    private String autore;
    private String feat;

    public Canzone(String nome, String autore, String feat, double durata) {
        super(nome, durata);
        this.autore = autore;
        this.feat = feat;
    }

    @Override
    public String show() {
        return super.show() + " | Autore: " + autore + " | Feat: " + feat;
    }
}

class Podcast extends TracciaAudio {

    private String conduttore;
    private String ospite;

    public Podcast(String nome, String conduttore, String ospite, double durata) {
        super(nome, durata);
        this.conduttore = conduttore;
        this.ospite = ospite;
    }

    @Override
    public String show() {
        return super.show() + " | Conduttore: " + conduttore + " | Ospite: " + ospite;
    }



}
    
 class Lettore extends TracciaAudio {

    public Lettore(String nome, double durata) {
        super(nome, durata);
    }

        int volume=5;
        int aumentaVolume(){
            if(volume<10){
                volume++;
            }
            return volume;
        }

        int diminuisciVolume(){
            if(volume>0){
                volume--;
            }
            return volume;
        }

        void Riproduci(TracciaAudio traccia){
            System.out.println("Riproduzione: " + traccia.show() + " | Volume: " + volume);
        }

    }

public class main{

    public static void main(String[] args) {

        TracciaAudio playlist[] = {
            new Canzone("Canzone1", "Autore1", "Feat1", 3.5),
            new Canzone("Canzone2", "Autore2", "Feat2", 4.0),
            new Podcast("Podcast1", "Conduttore1", "Ospite1", 30.0),
            new Lettore("Lettore1", 5.0)
        };


        for (TracciaAudio brano : playlist) {
            System.out.println(brano.show());
        }
        
    }
 }
