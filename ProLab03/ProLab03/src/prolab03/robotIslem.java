package prolab03;

import java.util.Scanner;

public class robotIslem {
    
    
    static public String robotTipi1;
    static public String robotTipi2;
    
    Scanner scan = new Scanner(System.in);

    private int engelSayisi;

    public int getEngelSayisi() {
        return engelSayisi;
    }

    public void setEngelSayisi(int engelSayisi) {
        engelSayisi = scan.nextInt();
        this.engelSayisi = engelSayisi;
    }

    public void EngelKoordinat() {
        
        int[][] koordinat = new int[20][20];
        int[][] engelKoor = new int[engelSayisi][engelSayisi];
            Scanner k = new Scanner(System.in);
        int a = 0, b = 0, i, j;
        
        for(i=0; i<engelSayisi; i++){
            for(j=0; j<engelSayisi; j++){
                /*
                a = k.nextInt[a][];
                b = k.nextInt[][b];
                engelKoor[a][b];
                */
            }
        }
        
    }

}
    
