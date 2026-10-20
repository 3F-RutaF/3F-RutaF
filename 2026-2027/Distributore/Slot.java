public class Slot {
    private Prodotto prodotto;
    private int quantita;

    public Slot(Prodotto prodotto, int quantita) {
        this.prodotto = prodotto;
        this.quantita = quantita;
    }

    public Prodotto getProdotto() {
        return prodotto;
    }

    public int getQuantita() {
        return quantita;
    }

    public void scalaQuantita() {
        if (quantita > 0) {
            quantita--;
        }
    }
}