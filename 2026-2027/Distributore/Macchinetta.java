public class Macchinetta {

    private float prezzo;
    private float resto;
    private String prodotto;
    private int prodotto_rimanente;

    public Macchinetta(float prezzo, float resto, String prodotto,int prodotto_rimanente) {
        this.prezzo = prezzo;
        this.resto = resto;
        this.prodotto = prodotto;
        this.prodotto_rimanente = prodotto_rimanente;
    }

    public void inserisciDenaro(float importo) {

    }

    public void erogaProdotto() {

    }

    public float restituisciResto() {
        return 0.0f;
    }

    public int getProdottoRimanente() {
        return 0;
    }

    public float getPrezzo() {
        return 0.0f;
    }

    public String getProdotto() {
        return "";
    }
}