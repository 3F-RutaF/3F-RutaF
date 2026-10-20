
public class Macchinetta {
    private GestoreContanti gestoreContanti;
    private GestoreChiavetta gestoreChiavetta;
    private Slot[] slots;

    public Macchinetta(Slot[] slots) {
        this.slots = slots;
        this.gestoreContanti = new GestoreContanti();
        this.gestoreChiavetta = new GestoreChiavetta();
    }

    public void stampaProdotti() {
        for (int i = 0; i < slots.length; i++) {
            Prodotto p = slots[i].getProdotto();

            System.out.println(
                i + " - " + p.getNome()
                + " | Prezzo: " + p.getPrezzo()
                + " euro | Quantita: "
                + slots[i].getQuantita()
            );
        }
    }

    public void acquista(int indice, float denaro) {
        if (indice < 0 || indice >= slots.length) {
            System.out.println("Slot non valido!");
            return;
        }

        Slot slot = slots[indice];
        Prodotto prodotto = slot.getProdotto();

        if (slot.getQuantita() <= 0) {
            System.out.println("Prodotto esaurito!");
            return;
        }

        float prezzo = prodotto.getPrezzo();

        if (!gestoreContanti.pagamentoValido(denaro, prezzo)) {
            System.out.println("Denaro insufficiente!");
            return;
        }

        float resto = gestoreContanti.calcolaResto(denaro, prezzo);

        slot.scalaQuantita();

        System.out.println("Acquisto effettuato!");
        System.out.println("Erogazione: " + prodotto.getNome());
        System.out.println("Resto: " + resto + " euro");
    }
}
