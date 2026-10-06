import java.util.Scanner;

class Student {
    String name;
    int age;
    double grade1;
    double grade2;
    double grade3;

    // Costruttore: inizializza i dati dello studente
    Student(String name, int age, double grade1, double grade2, double grade3) {
        this.name = name;
        this.age = age;
        this.grade1 = grade1;
        this.grade2 = grade2;
        this.grade3 = grade3;
    }

    // Restituisce la media dei voti
    double getAverage() {
        return (grade1 + grade2 + grade3) / 3;
    }

    // Restituisce true se la media è almeno 6
    boolean hasPassed() {
        return getAverage() >= 6;
    }

    void showInfo() {
        System.out.println("\n--- Student ---");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Average: " + getAverage());

        if (hasPassed()) {
            System.out.println("Result: PASSED");
        } else {
            System.out.println("Result: FAILED");
        }
    }
}

public class Esempio {

    public static void main(String[] args) {

        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("=== STUDENT MANAGEMENT ===");
            
            System.out.print("Enter student name: ");
            String name = scanner.nextLine();
            
            System.out.print("Enter age: ");
            int age = scanner.nextInt();
            
            System.out.print("Enter first grade: ");
            double grade1 = scanner.nextDouble();
            
            System.out.print("Enter second grade: ");
            double grade2 = scanner.nextDouble();
            
            System.out.print("Enter third grade: ");
            double grade3 = scanner.nextDouble();
            
            // Crea un oggetto della classe Student
            Student student = new Student(
                    name,
                    age,
                    grade1,
                    grade2,
                    grade3
            );
            
            // Chiama il metodo per mostrare i dati
            student.showInfo();
        }
    }
}

