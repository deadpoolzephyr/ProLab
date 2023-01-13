package prolab03;

import java.util.Scanner;

public class ProLab03 {

    public static void main(String[] args) {
        
        robotIslem r = new robotIslem();
        
        
        Scanner scan = new Scanner(System.in);
        int robotSayi;
        int sira, i;
        String type;
        String robotTipi1 = null;
        String robotTipi2;

        System.out.print("Tanımlanacak Robot Sayısı: ");
            robotSayi = scan.nextInt();
            String[] siraListe = new String[robotSayi];
            for(i=1; i<=robotSayi; i++){
            System.out.print("Tanımlanacak Robot Tipi: ");
                type = scan.next();
            if(type.equalsIgnoreCase("hibrit")){
                System.out.print("Hibrit robot için hareketli kısmı: ");
                robotTipi1 = scan.next();
                if(robotTipi1.equalsIgnoreCase("Tekerlekli")){
                //Tekerlekli(double tekerlekSayisi);
                }
                else if(robotTipi1.equalsIgnoreCase("Paletli")){
                //Paletli(double paletSayisi);
                }
                else if(robotTipi1.equalsIgnoreCase("Spider")){
                //Spider(double bacakSayisi);
                }
                else{
                    System.out.println("Hatalı giris. Lütfen Tekrar deneyiniz.");
                    
                }
                System.out.print("Hibrit robot için hareketsiz kısmı: ");
                robotTipi2 = scan.next();
                if(robotTipi2.equalsIgnoreCase("Seri")){
                //Seri(double kolUzunlugu, double yukMiktari);
                }
                else if(robotTipi2.equalsIgnoreCase("Paralel")){
                //Paralel(double kolUzunlugu, double yukMiktari);
                }
                else{
                    System.out.println("Hatalı giris. Lütfen Tekrar deneyiniz.");
                    
                }
            }
            else if(type.equalsIgnoreCase("Gezgin")){
                System.out.print("Gezgin Robot için tip belirleyin: ");
                robotTipi1 = scan.next();
                if(robotTipi1.equalsIgnoreCase("Tekerlekli")){
                //Tekerlekli(double tekerlekSayisi);
                }
                else if(robotTipi1.equalsIgnoreCase("Paletli")){
                //Paletli(double paletSayisi);
                }
                else if(robotTipi1.equalsIgnoreCase("Spider")){
                //Spider(double bacakSayisi);
                }
                else{
                    System.out.println("Hatalı giris. Lütfen Tekrar deneyiniz.");
                    
                }
            }
            else if(type.equalsIgnoreCase("Manipulator")){
                System.out.print("Manipülatör Robot için tip belirleyin: ");
                robotTipi1 = scan.next();
                if(robotTipi1.equalsIgnoreCase("Seri")){
                //Seri(double kolUzunlugu, double yukMiktari);
                }
                else if(robotTipi1.equalsIgnoreCase("Paralel")){
                //Paralel(double kolUzunlugu, double yukMiktari);
                }
                else{
                    System.out.println("Hatalı giris. Lütfen Tekrar deneyiniz.");
                    
                }
            }
            siraListe[i] = robotTipi1;
        }
            
            System.out.println("Hangi sıradaki robot hareket ettirilecek: ");
            sira = scan.nextInt();
            siraListe[sira] = robotTipi1;
    }
}
