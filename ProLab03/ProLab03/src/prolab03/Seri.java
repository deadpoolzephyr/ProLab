package prolab03;

import java.util.Scanner;

public class Seri extends manipulatorRobotlar {
    
    Scanner scan = new Scanner(System.in);
    
    public void Seri(){
    double kolUzunlugu;
    double yukMiktari;

    }
    
    public double getKolUzunlugu() {
        return kolUzunlugu;
    }

    public void setKolUzunlugu(double kolUzunlugu) {
        kolUzunlugu = scan.nextDouble();
        this.kolUzunlugu = kolUzunlugu;
    }

    public double getYukMiktari() {
        return yukMiktari;
    }

    public void setYukMiktari(double yukMiktari) {
        yukMiktari = scan.nextDouble();
        this.yukMiktari = yukMiktari;
    }
    
}
