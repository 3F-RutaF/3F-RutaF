```java
import java.util.Scanner;
import java.lang.Math;

class Punto{
    private double x;
    private double y;

    Punto(double x, double y){
        this.x = x;
        this.y = y;
    }

    double getDistanza(Punto altro){
        double dx = this.x - altro.x;
        double dy = this.y - altro.y;
        return Math.sqrt(dx * dx + dy * dy);
    }

    void trasla(double dx, double dy){
        this.x += dx;
        this.y += dy;
    }

    void getQuadrante(){
        if (x > 0 && y > 0) {
            System.out.println("Quadrante I");
        } else if (x < 0 && y > 0) {
            System.out.println("Quadrante II");
        } else if (x < 0 && y < 0) {
            System.out.println("Quadrante III");
        } else if (x > 0 && y < 0) {
            System.out.println("Quadrante IV");
        } else {
            System.out.println("Sull'asse");
        }
    }


    
}