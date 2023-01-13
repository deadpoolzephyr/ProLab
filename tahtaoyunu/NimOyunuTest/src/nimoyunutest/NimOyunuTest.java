package nimoyunutest;

import java.util.Scanner;

public class NimOyunuTest {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);         
          boolean oyuncu = false; // False 0 true 1
          int tahtaSatir;
          System.out.print("Tahta kaç satırdan oluşacaktır? :");
          tahtaSatir = scan.nextInt();
          tahta t = new tahta(tahtaSatir);
          System.out.println("Oyun " + t.toplamCubukSayisi + " çubuktan oluşmaktadır.");
          
          
          while(t.toplamCubukSayisi != 1)
          {
          System.out.println("--------------------------------------------------");
          int oyuncuAdi = oyuncu ? 1 : 0;
          t.ciz();
          int satir;
          int cubuk;
          System.out.print((oyuncuAdi +1) + " Oyuncu Satır Seçimi: ");    
          satir = scan.nextInt();
          System.out.print((oyuncuAdi +1) + " Oyuncu Çubuk Seçimi: ");    
          cubuk = scan.nextInt();
          boolean x = t.cubukAl(satir, cubuk);
          if(x) oyuncu = !oyuncu;
              
          
              
          
          }
          
          if(oyuncu)
              System.out.println("1. Kazandı");
          else
              System.out.println("2. Kazandı");
        
    }
    
}
