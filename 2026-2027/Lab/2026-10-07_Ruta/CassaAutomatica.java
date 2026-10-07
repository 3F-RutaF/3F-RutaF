public class CassaAutomatica {
    private double[] prezzi;
    private int numeroProdotti;


    public CassaAutomatica(int capacita) {
        prezzi = new double[capacita];
        numeroProdotti = 0;
    }


    public void aggiungiPrezzo(double prezzo) {
        if (numeroProdotti < prezzi.length) {
            prezzi[numeroProdotti] = prezzo;
            numeroProdotti++;
        } else {
            System.out.println("La cassa è piena.");
        }
    }

    
    public double calcolaTotale() {
        double totale = 0;

        for (int i = 0; i < numeroProdotti; i++) {
            totale += prezzi[i];
        }

        return totale;
    }

    
    public double paga(double pagamento) {
        double totale = calcolaTotale();

        if (pagamento >= totale) {
            return pagamento - totale;
        } else {
            System.out.println("Pagamento insufficiente.");
            return -1;
        }
    }
}
