package prolab2.pkg01;

import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Collections;
import java.util.Comparator;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class ProLab201 {
    
static int n = 81;
static int I = 99999999;

static void FloydWarshall(String  W[][]) {
            int [][] dist = new int [n+1][n];
            int i, j, k;
            
            for(i=0;i<n+1;i++){
                for(j=0;j<n;j++){
                dist[i+1][j]=Integer.parseInt(W[i+1][j]);
                }
            }

                    // Floyd-Warshall Algorithm O(n^3)
                    for (k = 0; k < n; k++)
                            for (j = 0; j < n; j++)
                                    for (i = 0; i < n; i++){
                                            if (dist[i+1][k] + dist[k+1][j] < dist[i+1][j]) {
                                                    dist[i+1][j] = dist[i+1][k] + dist[k+1][j];
                                            }
                                    }

            printMatrix(dist);
    }

    public static void main(String[] args) {
        
        String dosya = "komsuuzaklik.txt";
        BufferedReader oku;
        Map<String,Integer> allUsers = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        String Baslangic, Son;
                
        try{
            oku = new BufferedReader(new FileReader(dosya));
            String satir = oku.readLine();
            
            int lineNumber = 0;
            System.out.println("Başlangıç şehrini giriniz: ");
            Baslangic = sc.nextLine();
            System.out.println("Ulaşılacak şehri giriniz: ");
            Son = sc.nextLine();
            
            while (satir != null) {

                String satirTrimmed = satir.replace(" ", "");
                
                if(lineNumber >= 0){
                    String plaka = "";
                    String sehir = "";
                    String komsu = "";
                    String[][] matris = new String[82][81];
                    String[] satirBolum = satirTrimmed.split(",");
                        

                    if(satirBolum.length > 1){
                            plaka = satirBolum[0];
                            sehir = matris[lineNumber+1][lineNumber];
                            for(int i=0; i<81; i++){
                            for(int j=0; j<81; j++){
                            komsu = matris[i+1][j];
                            }
                            }
                     }
                    System.out.println(plaka + " | " + sehir + " | " + komsu );
                    FloydWarshall(matris);
                }
                satir = oku.readLine();
                lineNumber++;
                
            }
            oku.close();
        }
        catch (IOException e){
            System.out.println(dosya+" adli dosya okunamiyor.");
        }
        
    }
    static void printMatrix(int  dist[][]) {
        for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                        if (dist[i+1][j] == I){
                                System.out.print("I   \t");}
                        else{
                                System.out.print(dist[i+1][j] + "   \t");}
                }
                System.out.println();
        }
    }
}
    
    /*
    private static Map<String, Integer> sortByValue(Map<String, Integer> unsortMap) {
        List<Map.Entry<String, Integer>> list = new LinkedList<Map.Entry<String, Integer>>(unsortMap.entrySet());

        Collections.sort(list, new Comparator<Map.Entry<String, Integer>>() {
            public int compare(Map.Entry<String, Integer> o1,
                               Map.Entry<String, Integer> o2) {
                return (o2.getValue()).compareTo(o1.getValue());
            }
        });

        Map<String, Integer> sortedMap = new LinkedHashMap<String, Integer>();
        for (Map.Entry<String, Integer> entry : list) {
            sortedMap.put(entry.getKey(), entry.getValue());
        }

        return sortedMap;
    }
    
    public static <K, V> void printMap(Map<K, V> map) {
        int i=0;
        for (Map.Entry<K, V> entry : map.entrySet()) {
            System.out.println(entry.getKey() + " [" + entry.getValue() + "]");
            System.out.println(i + "-" + entry.getKey());
            i++;
        }
    }
}
*/