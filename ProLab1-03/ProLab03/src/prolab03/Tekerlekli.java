package prolab03;

import java.util.Scanner;

public class Tekerlekli extends gezginRobotlar {
    
    Scanner scan = new Scanner(System.in);
    
    public void Tekerlekli(){
    double tekerlekSayisi;

    }
    
    public double getTekerlekSayisi() {
        return tekerlekSayisi;
    }

    public void setTekerlekSayisi(double tekerlekSayisi) {
        tekerlekSayisi = scan.nextDouble();
        this.tekerlekSayisi = tekerlekSayisi;
    }
}
