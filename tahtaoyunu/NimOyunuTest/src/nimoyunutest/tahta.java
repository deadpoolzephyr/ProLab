package nimoyunutest;

import java.util.ArrayList;

public class tahta {
    
        int satirNo;
    int toplamCubukSayisi;
    ArrayList<satir> satirlar= new ArrayList<>();

    public tahta(int sS) {
        satirNo = sS;
        for(int i = 1; i<= satirNo;i++)
        {
            satir s = new satir(i);
            toplamCubukSayisi += s.getCubukSayisi();
            satirlar.add(s);
        }
    }
    void ciz(){
        for(int i = 0; i< satirNo; i++)
        {
            satirlar.get(i).ciz();
        }
    }
    boolean cubukAl(int sS,int cS)
    {
        boolean x = false;
        if(sS > 0 && sS <= satirlar.size())
        {
            x = satirlar.get(sS-1).cubukAl(cS);
            if(x)
            {
                System.out.println("Çubuk Çekildi");
                toplamCubukSayisi = toplamCubukSayisi - cS;
            }
            else
                System.out.println("Kural hatası");
            
        } else
        {
            System.out.println("Satır uygun değil");
        }
            
            return x;
    }

    public int getToplamCubukSayisi() {
        return toplamCubukSayisi;
    }
    
}
