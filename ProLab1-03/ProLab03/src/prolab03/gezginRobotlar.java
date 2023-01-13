package prolab03;

import java.util.Scanner;

public abstract class gezginRobotlar {

    private static String robotTipi1;
    //Scanner scan = new Scanner (System.in);
    
    public double tekerlekSayisi;
    public double paletSayisi;
    public double bacakSayisi;
    

    
    public void gezinmeHizi(){
        
        if(robotTipi1.equalsIgnoreCase("tekerlekli")){
            
            
            }
        else if(robotTipi1.equalsIgnoreCase("paletli")){
            
            
            }
        else if(robotTipi1.equalsIgnoreCase("spider")){
            
            
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
