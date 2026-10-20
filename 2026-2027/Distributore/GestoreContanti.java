
public class GestoreContanti {
    private CalcolaResti calcolatore;

    public GestoreContanti() {
        calcolatore = new CalcolaResti();
    }

    public boolean pagamentoValido(float denaro, float prezzo) {
        return denaro >= prezzo;
    }

    public float calcolaResto(float denaro, float prezzo) {
        return calcolatore.calcola(denaro, prezzo);
    }
}
