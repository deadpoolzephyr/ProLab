package prolab03;

import java.util.Scanner;

public class Spider extends gezginRobotlar{
    
    Scanner scan = new Scanner(System.in);
    
    public void Spider(){ 
    double bacakSayisi;

    }
    
    public double getBacakSayisi() {
        return bacakSayisi;
    }

    public void setBacakSayisi(double bacakSayisi) {
        bacakSayisi = scan.nextDouble();
        this.bacakSayisi = bacakSayisi;
    }
    
}
