package prolab03;

import java.util.Scanner;

public class Paletli extends gezginRobotlar {
    
    Scanner scan = new Scanner(System.in);
    
    public void Paletli(){
    double paletSayisi;

    }
    
    public double getPaletSayisi() {
        return paletSayisi;
    }

    public void setPaletSayisi(double paletSayisi) {
        paletSayisi = scan.nextDouble();
        this.paletSayisi = paletSayisi;
    }
    
}
