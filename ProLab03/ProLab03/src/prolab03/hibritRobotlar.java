package prolab03;

import java.util.Scanner;

public class hibritRobotlar {

    private static String robotTipi1;
    
    private double tekerlekSayisi;
    private double paletSayisi;
    private double bacakSayisi;
    private double yukMiktari;
    private double kolUzunlugu;
    private double sabitlenmeSuresi;
    private double gecisSuresi;
    
   Scanner scan = new Scanner(System.in);
    
    public double getTekerlekSayisi() {
        return tekerlekSayisi;
    }

    public void setTekerlekSayisi(double tekerlekSayisi) {
        tekerlekSayisi = scan.nextDouble();
        this.tekerlekSayisi = tekerlekSayisi;
    }
    
    public double getPaletSayisi() {
        return paletSayisi;
    }

    public void setPaletSayisi(double paletSayisi) {
        paletSayisi = scan.nextDouble();
        this.paletSayisi = paletSayisi;
    }
    
    public double getBacakSayisi() {
        return bacakSayisi;
    }

    public void setBacakSayisi(double bacakSayisi) {
        bacakSayisi = scan.nextDouble();
        this.bacakSayisi = bacakSayisi;
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
    
    public double getSabitlenmeSuresi() {
        return sabitlenmeSuresi;
    }

    public void setSabitlenmeSuresi(double sabitlenmeSuresi) {
        sabitlenmeSuresi = scan.nextDouble();
        this.sabitlenmeSuresi = sabitlenmeSuresi;
    }
    
    public double getGecisSuresi() {
        return gecisSuresi;
    }

    public void setGecisSuresi(double gecisSuresi) {
        gecisSuresi = scan.nextDouble();
        this.gecisSuresi = gecisSuresi;
    }
    
    
    static void gezinmeHizi(){
        
        if(robotTipi1.equalsIgnoreCase("tekerlekli")){
            
            
            }
        else if(robotTipi1.equalsIgnoreCase("paletli")){
            
            
            }
        else if(robotTipi1.equalsIgnoreCase("spider")){
            
            
            }
        }
    
    
    public void TasimaKapasitesi(){
        
        if(robotTipi1.equalsIgnoreCase("seri")){
            
            
            }
        else if(robotTipi1.equalsIgnoreCase("paralel")){
            
            
            }
        }
    
    
    public void EngelGecmeSuresiBul(){
            
            double EngelSure;
            if(robotTipi1.equalsIgnoreCase("tekerlekli")){
                EngelSure = tekerlekSayisi*(0.5);            
            }
            else if(robotTipi1.equalsIgnoreCase("paletli")){
                EngelSure = paletSayisi*3;
            }
        }
    
}
