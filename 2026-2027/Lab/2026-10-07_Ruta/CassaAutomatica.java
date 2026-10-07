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

    public static void main(String[] args) {

        CassaAutomatica cassa = new CassaAutomatica(10);

        cassa.aggiungiPrezzo(2.50);
        cassa.aggiungiPrezzo(1.80);
        cassa.aggiungiPrezzo(5.20);
        cassa.aggiungiPrezzo(3.00);

        double totale = cassa.calcolaTotale();

        System.out.println("Totale: " + totale + " euro");

        double pagamento = 20.00;
        double resto = cassa.paga(pagamento);

        if (resto >= 0) {
            System.out.println("Pagamento: " + pagamento + " euro");
            System.out.println("Resto: " + resto + " euro");
        }
    }
}
