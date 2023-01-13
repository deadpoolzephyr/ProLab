package prolab01.pkg2;

import java.util.Random;

public class Oyuncu {
    
    public String OyuncuID;
    public String OyuncuAdi;
    public int Skor;
    
        
    
    public Oyuncu(String OyuncuID, String OyuncuAdi, int Skor){
        this.OyuncuID=OyuncuID;
        this.OyuncuAdi=OyuncuAdi;
        this.Skor=Skor;
    }

    public String getOyuncuID() {
        return OyuncuID;
    }

    public void setOyuncuID(String OyuncuID) {
        this.OyuncuID = OyuncuID;
    }

    public String getOyuncuAdi() {
        return OyuncuAdi;
    }

    public void setOyuncuAdi(String OyuncuAdi) {
        this.OyuncuAdi = OyuncuAdi;
    }

    public int getSkor() {
        return Skor;
    }

    public void setSkor(int Skor) {
        this.Skor = Skor;
    }
    
    
    
    public Oyuncu(){
    
        
    }
    
    public void  SkorGoster(){
    
    
    }
    
    public void KartSecim(){
    
    
    }
    
}
