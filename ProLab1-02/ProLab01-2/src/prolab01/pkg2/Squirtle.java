/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package prolab01.pkg2;

import javax.swing.ImageIcon;

/**
 *
 * @author arda_
 */
public class Squirtle extends Pokemon {
    
    private String Dosya = "src\\Pics\\Squirtle1.jpg";
    private ImageIcon ikon = new ImageIcon(Dosya);
        private int Hasar = 40;
        public int k1=0;
        private int k2=0;
    @Override
        public String getDosya(){
            return Dosya;
        }

        public Squirtle(){
        
        }
        
        public Squirtle(String pID, String[] pAdı, String[] pTip){
            super(pID, pAdı, pTip);
            
        }
        
    @Override
        public int getHasar(){
            return this.Hasar;
        }
                
        public void setHasar(int Hasar){
            this.Hasar = Hasar;
        }
        
    @Override
        public void hasarPuaniGoster(){
        System.out.println(""+this.Hasar);
    }
    
    @Override
    public boolean kartKullanildiMiP1(int n){
        if(n==1){
            System.out.println("KULLANILDI.");
        return true;
        }
        else
            return false;
        
        }
    
    @Override
    public boolean kartKullanildiMiP2(int n){
    if(n==1){
            System.out.println("KULLANILDI.");
        return true;
        }
        else
            return false;
        
        
    }

    @Override
    public int getK2() {
        return this.k2;
    }

    @Override
    public void setK2(int k2) {
        this.k2 = 1;
    }
    
}
